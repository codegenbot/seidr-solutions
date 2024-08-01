#include <iostream>
#include <string>
#include <map>
#include <cassert>

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
    std::map<std::string, int> dict;
    int n;
    std::string key;
    int value;
    
    std::cout << "Enter the number of key-value pairs: ";
    std::cin >> n;
    
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter key: ";
        std::cin >> key;
        std::cout << "Enter value: ";
        std::cin >> value;
        dict[key] = value;
    }
    
    if(check_dict_case(dict)) {
        std::cout << "Keys have consistent case.\n";
    } else {
        std::cout << "Keys do not have consistent case.\n";
    }
    
    return 0;
}