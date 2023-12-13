```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    
    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    
    return filteredStrings;
}

int main() {
    // test the filter_by_prefix function
    vector<string> strings = {"apple", "banana", "orange", "pear"};
    string prefix = "a";
    vector<string> filtered = filter_by_prefix(strings, prefix);
    
    for (const auto& str : filtered) {
        cout << str << " ";
    }
    
    cout << endl;
    
    return 0;
}
```