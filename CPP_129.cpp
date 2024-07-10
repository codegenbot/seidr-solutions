#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<int> a, vector<vector<int>> b) {
    if (a.size() != b[0].size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[1][i]) return false;
    }
    return true;
}

string to_string(int x) {
    if(x > INT_MAX || x < INT_MIN) 
        return "Out of range";
    else
        return std::to_string(x);
}

vector<int> minPath(vector<vector<int>> input, int target) {
    vector<int> path;
    int i = 0;
    while(i < target) {
        if (i >= input[1].size()) {
            path.push_back(input[1][0]);
            i -= input[1][0];
        } else {
            for (int j = 0; j < input.size(); j++) {
                if (i >= input[j][0]) {
                    path.push_back(input[j][0]);
                    i -= input[j][0];
                }
            }
            break;
        }
    }
    return path;
}

void minPathTest() {
    vector<vector<int>> input;
    input.push_back({1, 3});
    input.push_back({3, 2});
    int target = 10;

    if (minPath(input, target).empty()) {
        cout << "No paths found with length " << target << "." << endl;
        return; 
    }
    
    string outputStr = "";
    for (int i : minPath(input, target)) {
        while(i > 0) {
            if(i >= input[1].size()) {
                i -= input[1][0];
                outputStr += to_string(i) + " ";
            } else {
                int j = 0;
                while(j < input.size() && i >= input[j][0]) {
                    i -= input[j][0];
                    outputStr += to_string(i) + " ";
                    j++;
                }
                break;
            }
        }
    }
    cout << outputStr << endl;
}

int main() {
    minPathTest();
}