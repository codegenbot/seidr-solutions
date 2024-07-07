```cpp
#include <iostream>
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (std::map<std::string, std::string>::const_iterator it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((it->first[0] >= 'a' && it->first[0] <= 'z') != (allLower)) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}

int main() {
    std::map<std::string, std::string> dict;

    std::cout << "Enter dictionary entries (format: key:value):" << std::endl;
    
    for (;;) {
        std::string line;
        std::cin >> line;
        
        if (!line.empty()) {
            size_t pos = line.find(':');
            
            if (pos != std::string::npos) {
                dict[line.substr(0, pos)] = line.substr(pos + 1);
            } else {
                dict[line] = "";
            }
        } else {
            break;
        }
    }

    bool result = check_dict_case(dict);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}