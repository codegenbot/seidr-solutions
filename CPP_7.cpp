#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

void assert_equal(const vector<string>& a, const vector<string>& b) {
    assert(a.size() == b.size() && equal(a.begin(), a.end(), b.begin()));
}

int main() {
    assert_equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"});
    return 0;
}