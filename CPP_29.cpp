```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    // implementation goes here
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
    // test cases
    return 0;
}
```