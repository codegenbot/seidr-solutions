#include <iostream>
#include <vector>
#include <cassert>

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
    vector<string> strings = {"apple", "banana", "orange", "apricot", "grape"};
    vector<string> filtered_result = filter_by_prefix(strings, "ap");

    assert(filtered_result == vector<string>{"apple", "apricot"});

    return 0;
}