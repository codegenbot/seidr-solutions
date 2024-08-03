#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    return vec1 == vec2;
}

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}