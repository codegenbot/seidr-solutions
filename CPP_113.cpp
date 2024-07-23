#include <vector>
#include <string>
#include <cctype>
#include <iostream>

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
        result.push_back(to_string(count) + " is the number of odd elements in the string " + to_string(i+1));
    }
    return result;
}

int main() {
    vector<string> test = {"271", "137", "314"};
    vector<string> expected = {"2 is the number of odd elements in the string 1", 
                               "1 is the number of odd elements in the string 2", 
                               "0 is the number of odd elements in the string 3"};
    vector<string> result = odd_count(test);
    bool same = issame(result, expected);
    if (same) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test failed." << endl;
    }
}