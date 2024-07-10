#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool are_same(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> test_strings = {"apple", "banana", "apricot", "avocado"};
    vector<string> expected_result = {"apple", "apricot"};

    vector<string> filtered_strings = filter_by_prefix(test_strings, "a");

    assert(are_same(filtered_strings, expected_result));

    return 0;
}