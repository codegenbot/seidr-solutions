#include <iostream>
#include <vector>
#include <cassert>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + " in the string.";
        result.push_back(res);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> expected = {
        "the number of odd elements 2 in the string.",
        "the number of odd elements 3 in the string.",
        "the number of odd elements 2 in the string."
    };

    assert (issame(odd_count({"271", "137", "314"}), expected));
    cout << "Test passed!" << endl;

    return 0;
}