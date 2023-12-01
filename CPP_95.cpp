#include <map>
#include <string>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for (const auto& pair : dict) {
        std::string key = pair.first;
        
        if (key.empty()) {
            return false;
        }
        
        if (key != tolower(key)) {
            all_lower = false;
        }
        
        if (key != toupper(key)) {
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);

    return 0;
}