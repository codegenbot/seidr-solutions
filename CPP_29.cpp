#include <iostream>
#include <vector>

vector<string> filter_by_prefix(vector<string> strings, string prefix);
bool are_equal(vector<string> a, vector<string> b);

int main() {
    assert(are_equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const string& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool are_equal(vector<string> a, vector<string> b) {
    // compare the size of vectors
    if (a.size() != b.size()) {
        return false;
    }
    
    // compare each element of the vectors
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}