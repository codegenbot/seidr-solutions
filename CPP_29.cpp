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
    vector<string> test_strings = {"prefix_one", "prefix_two", "not_prefix"};
    vector<string> filtered_strings = filter_by_prefix(test_strings, "prefix");

    assert(filtered_strings == vector<string>{"prefix_one", "prefix_two"});

    return 0;
}