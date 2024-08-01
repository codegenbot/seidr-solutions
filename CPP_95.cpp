#include <iostream>
#include <map>
#include <cassert>
#include <cctype>

bool check_dict_case(std::map<std::string,std::string> dict){
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(auto const& pair : dict){
        if(pair.first != "" && pair.first != std::tolower(pair.first[0])){
            all_lower = false;
        }
        if(pair.first != "" && pair.first != std::toupper(pair.first[0])){
            all_upper = false;
        }
    }

    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);
}