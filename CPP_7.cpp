#include <vector>
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, const string& substring) {
    vector<string> filtered_strings;
    for (const string& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

void test_filter_by_substring() {
    vector<string> input = { "apple", "banana", "cherry", "date" };
    vector<string> expected_output = { "apple", "date" };
    assert(filter_by_substring(filter_by_substring(input, "a"), expected_output));
}

int main() {
    test_filter_by_substring();
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, filter_by_substring("run")));
    return 0;
}