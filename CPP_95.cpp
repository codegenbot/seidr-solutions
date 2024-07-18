#include <iostream>
#include <unordered_map>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;
    bool all_lowercase = true;
    bool all_uppercase = true;
    for(auto const& pair : dict) {
        if(pair.first != tolower(pair.first[0])) {
            all_lowercase = false;
        }
        if(pair.first != toupper(pair.first[0])) {
            all_uppercase = false;
        }
    }
    return all_lowercase || all_uppercase;
}

int main() {
    std::unordered_map<std::string, int> dict = {{"Apple", 1}, {"banana", 2}, {"Cherry", 3}};
    
    if(check_dict_case(dict)) {
        std::cout << "Dictionary keys are either all lowercase or all uppercase." << std::endl;
    } else {
        std::cout << "Dictionary keys are of mixed case." << std::endl;
    }
    
    return 0;
}