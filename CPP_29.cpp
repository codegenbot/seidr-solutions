```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix) {
    std::vector<std::string> filteredStrings;
    
    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    
    return filteredStrings;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "orange", "pear"};
    std::string prefix = "a";
    std::vector<std::string> filtered = filter_by_prefix(strings, prefix);
    
    for (const auto& str : filtered) {
        std::cout << str << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}
```