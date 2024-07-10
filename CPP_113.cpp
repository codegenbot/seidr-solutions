#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int oddCount = 0;
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        string oddCountStr = "the number of odd elements " + to_string(oddCount) + " in the string " + str + " of the input.";
        result.push_back(oddCountStr);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {"the number of odd elements 2 in the string 271 of the input.",
                                                      "the number of odd elements 3 in the string 137 of the input.",
                                                      "the number of odd elements 2 in the string 314 of the input."}));
    return 0;
}