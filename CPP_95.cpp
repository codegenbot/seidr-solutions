#include <iostream>
#include <string>
#include <map>

bool check_dict_case(const std::map<std::string, int>& dict) {
    if(dict.empty()) return false;
    bool all_lower = true, all_upper = true;
    for(const auto& pair : dict) {
        std::string key = pair.first;
        bool is_lower = true, is_upper = true;
        for(char c : key) {
            if(!std::islower(c)) is_lower = false;
            if(!std::isupper(c)) is_upper = false;
        }
        if(!is_lower) all_lower = false;
        if(!is_upper) all_upper = false;
    }
    return all_lower || all_upper;
}

int main() {
    // Test Cases
    std::map<std::string, int> test_dict1 = {{"apple", 1}, {"banana", 2}};
    std::map<std::string, int> test_dict2 = {{"Orange", 1}, {"Grapes", 2}};

    std::cout << check_dict_case(test_dict1) << std::endl; // Output: true (both lower case)
    std::cout << check_dict_case(test_dict2) << std::endl; // Output: true (both upper case)

    return 0;
}