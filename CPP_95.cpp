#include <iostream>
#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(const auto& entry : dict) {
        const std::string& key = entry.first;

        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != std::string::npos) return false;

        all_lower = all_lower && std::all_of(key.begin(), key.end(), ::islower);
        all_upper = all_upper && std::all_of(key.begin(), key.end(), ::isupper);
    }

    return all_lower || all_upper;
}

int main() {
    std::map<std::string, std::string> test_dict1 = {{"apple", "fruit"}, {"banana", "fruit"}};
    std::map<std::string, std::string> test_dict2 = {{"APPLE", "FRUIT"}, {"ORANGE", "FRUIT"}};

    std::cout << std::boolalpha;
    std::cout << check_dict_case(test_dict1) << std::endl;
    std::cout << check_dict_case(test_dict2) << std::endl;

    return 0;
}