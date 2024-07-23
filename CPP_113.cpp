#include <vector>
#include <string>
#include <cctype>
#include <iostream>
#include <fstream>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back(to_string(count) + " in the string " + to_string(i+1));
    }
    return result;
}

int main() {
    vector<string> test = {"271", "137", "314"};
    vector<string> result = odd_count(test);
    if (issame(result, {"2 in the string 1", "1 in the string 2", "0 in the string 3"})) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test failed." << endl;
    }
}