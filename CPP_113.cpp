#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(const vector<string> &lst) {
    vector<string> result;
    for (const string &s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if (isdigit(c) && (c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        string res = "the number of odd elements " + to_string(oddCount) + " in the string " 
                     + to_string(oddCount) + " is " + to_string(oddCount) + " of the input.";
        result.push_back(res);
    }
    return result;
}

bool issame(const vector<string> &a, const vector<string> &b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 2 is 2 of the input.",
        "the number of odd elements 3 in the string 3 is 3 of the input.",
        "the number of odd elements 2 in the string 2 is 2 of the input."
    }));
    
    return 0;
}