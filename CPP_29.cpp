#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix);

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size())
        return false;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> test_strings = { "apple", "banana", "apricot", "cherry" };
    string test_prefix = "ap";
    vector<string> filtered_strings = filter_by_prefix(test_strings, test_prefix);

    vector<string> expected_result = { "apple", "apricot" };
    assert(issame(filtered_strings, expected_result));

    assert(issame(filter_by_prefix({ "xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx" }, "xxx"), { "xxx", "xxxAAA", "xxx" }));

    return 0;
}