#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

bool is_same_contents(vector<string> a, vector<string> b) {
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
    assert(is_same_contents(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));

    // Add more test cases to verify the correctness of the filter_by_substring function
    assert(is_same_contents(filter_by_substring({"hello", "world", "foo", "bar"}, "o"), {"hello", "foo"}));
    assert(is_same_contents(filter_by_substring({"apple", "banana", "cherry", "date"}, "a"), {"apple", "banana"}));
    assert(is_same_contents(filter_by_substring({"cat", "dog", "elephant", "fish"}, "t"), {"cat", "elephant"}));

    cout << "All test cases passed!" << endl;

    return 0;
}