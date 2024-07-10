#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (auto str : lst) {
        int odd_count = count_if(str.begin(), str.end(), [](char c) { return (c - '0') % 2 != 0; });
        result.push_back("the number of odd elements " + to_string(odd_count) + " in the string " + str + " of the input.");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {"the number of odd elements 2 in the string 271 of the input.",
                                                      "the number of odd elements 2 in the string 137 of the input.",
                                                      "the number of odd elements 2 in the string 314 of the input."}));
    return 0;
}