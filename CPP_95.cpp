```cpp
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    for (const auto& pair : dict) {
        if (!dict.count(to_string(pair.first).convert_to_lower()) && 
           !dict.count(to_string(pair.first).convert_to_upper()))
            return false;
    }
    return true;
}