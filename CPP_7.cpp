#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filtered_strings;
    for (string str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

bool isSame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(isSame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    assert(isSame(filter_by_substring({"hello", "world", "hello world"}, "hello"), {"hello", "hello world"}));
    assert(isSame(filter_by_substring({"apple", "banana", "orange"}, "fruit"), {}));
    // Add other test cases and function calls here

    return 0;
}