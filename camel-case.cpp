```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> words;
    size_t start = 0;
    size_t end = 0;
    
    while (end != std::string::npos) {
        end = str.find(delimiter, start);
        
        if (end == std::string::npos) {
            words.push_back(str.substr(start));
        } else {
            words.push_back(str.substr(start, end - start));
            start = end + 1;
        }
    }
    
    return words;
}

std::string toCamelCase(const std::string& str) {
    std::string output;
    for (int i = 0; i < str.size(); i++) {
        if (i == 0 || str[i] == '-') {
            output += toupper(str[i]);
        } else {
            output += tolower(str[i]);
        }
    }
    return output;
}
```