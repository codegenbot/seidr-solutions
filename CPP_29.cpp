```cpp
#include <vector>
#include <string.h>
#include <cassert>
#include <iostream>

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_prefix(vector<string> strings, string prefix);

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    
    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    
    return filteredStrings;
}

int main() {
    std::vector<std::string> filtered = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};

    std::cout << (issame(filtered, expected) ? "Pass" : "Fail") << std::endl;
    return 0;
}
```