#include <iostream>
#include <unordered_map>
#include <cctype>

bool check_dict_case(const std::unordered_map<std::string, int>& dict){
    if(dict.empty()) return false;
    bool all_lower = true;
    bool all_upper = true;
    for(const auto& pair : dict){
        if(pair.first != tolower(pair.first[0])){
            all_lower = false;
        }
        if(pair.first != toupper(pair.first[0])){
            all_upper = false;
        }
    }
    return all_lower || all_upper;
}

int main() {
    // Test cases
    assert (check_dict_case({}) == false);

    return 0;
}