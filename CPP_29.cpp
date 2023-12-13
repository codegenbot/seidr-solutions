```
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (string s : strings) {
        if (s.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

bool issame(vector<string> a, vector<string> b) {
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
    // Test cases with assert statements
    //...
    vector<string> strings = {"apple", "banana", "grapes", "orange"};
    string prefix = "ap";
    vector<string> filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{"apple"});
    
    strings = {"apple", "banana", "grapes", "orange"};
    prefix = "b";
    filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{"banana"});
    
    strings = {"apple", "banana", "grapes", "orange"};
    prefix = "g";
    filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{"grapes"});
    
    strings = {"apple", "banana", "grapes", "orange"};
    prefix = "o";
    filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{"orange"});
    
    strings = {"apple", "banana", "grapes", "orange"};
    prefix = "z";
    filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{});
    
    strings = {"apple", "banana", "grapes", "orange"};
    prefix = "";
    filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{"apple", "banana", "grapes", "orange"});
    
    strings = {};
    prefix = "ap";
    filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{});

    strings = {};
    prefix = "";
    filtered = filter_by_prefix(strings, prefix);
    assert(filtered == vector<string>{});
    
    return 0;
}
```