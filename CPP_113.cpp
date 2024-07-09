#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> odd_count(const vector<string>& lst) {
    vector<string> result;
    for (const string& str : lst) {
        int oddCount = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + " in the string " + str + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
    return 0;
}