#include <iostream>
#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict) {
        std::string key = entry.first;
        
        if(!key.empty() && !all_lower && !all_upper) return false;
        
        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != std::string::npos) return false;
        
        for(char c : key) {
            all_lower = all_lower && islower(c);
            all_upper = all_upper && isupper(c);
        }
    }
    
    return all_lower || all_upper;
}

int main() {
    std::map<std::string, std::string> dict1 = {{"apple", "fruit"}, {"banana", "fruit"}};
    std::map<std::string, std::string> dict2 = {{"Cake", "food"}, {"Donut", "food"}};
    
    std::cout << std::boolalpha << check_dict_case(dict1) << std::endl; // Output: true
    std::cout << std::boolalpha << check_dict_case(dict2) << std::endl; // Output: false
    
    return 0;
}