#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
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
    assert(issame(filter_by_substring(input, "a"), expected_output));
}

int main() {
    test_filter_by_substring();
    vector<string> assert_input = { "grunt", "trumpet", "prune", "gruesome" };
    vector<string> assert_expected_output = { "grunt", "prune" };
    assert(issame(filter_by_substring(assert_input, "run"), assert_expected_output));
    
    return 0;
}