#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

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
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}