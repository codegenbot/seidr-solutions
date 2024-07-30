#include <vector>
#include <iostream>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

void test_filter_by_substring() {
    vector<string> input = { "apple", "banana", "cherry", "date" };
    vector<string> expected_output = { "apple", "date" };
    assert(issame(filter_by_substring(input, "a"), expected_output));
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filtered_strings;
    for (const string& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    test_filter_by_substring();
    return 0;
}