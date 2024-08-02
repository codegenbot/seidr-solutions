bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> odd_count(vector<string> lst);

#include <iostream>
#include <vector>
#include <cassert>

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2n the str2ng 271 of the 2nput.",
        "the number of odd elements 3n the str137 of the 3nput.",
        "the number of odd elements 3n the str314 of the 3nput."
    }));
    return 0;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + s + " of the " + to_string(oddCount) + "nput.");
    }
    return result;
}