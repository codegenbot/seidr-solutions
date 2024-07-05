#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int odd_count = 0;
        for (char c : str) {
            if (isdigit(c) && (c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + "n the str" + to_string(odd_count) + "ng " + to_string(odd_count) + " of the " + to_string(odd_count) + "nput.";
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
    assert (issame(odd_count({"271", "137", "314"}) , {
        "the number of odd elements 2n the str2ng 2 of the 2nput.",
        "the number of odd elements 3n the str3ng 3 of the 3nput.",
        "the number of odd elements 2n the str2ng 2 of the 2nput."
    }));
    cout << "All test cases pass." << endl;
    return 0;
}