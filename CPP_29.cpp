#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "orange", "grape"};
    string prefix = "ap";
    
    vector<string> filteredStrings = filter_by_prefix(strings, prefix);
    
    assert(filteredStrings.size() == 2);
    assert(filteredStrings[0] == "apple");
    assert(filteredStrings[1] == "apricot");

    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}