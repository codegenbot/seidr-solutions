```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filteredStrings;
    
    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    
    return filteredStrings;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange", "pear"};
    string prefix = "a";
    
    for (const auto& str : filter_by_prefix(strings, prefix)) {
        cout << str << " ";
    }
    
    cout << endl;
    
    return 0;
}
```