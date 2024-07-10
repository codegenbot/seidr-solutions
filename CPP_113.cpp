
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> odd_strings;
    for (const auto &str : lst) {
        int odd_count = count_if(str.begin(), str.end(), [](char c) { return c % 2 != 0; });
        if (odd_count % 2 != 0) {
            odd_strings.push_back(str);
        }
    }
    return odd_strings;
}

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {"137", "314"}));
    return 0;
}