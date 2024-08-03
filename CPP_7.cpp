#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool check_if_equal(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
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
    assert(check_if_equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}