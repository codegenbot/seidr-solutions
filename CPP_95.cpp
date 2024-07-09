#include <map>
#include <string>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        for(auto const& c : pair.first){
            if(std::islower(static_cast<unsigned char>(c))) all_upper = false;
            if(std::isupper(static_cast<unsigned char>(c))) all_lower = false;
        }
    }
    
    return all_lower || all_upper;
}

int main() {
    // Test the function
    assert(check_dict_case({}) == false);
    
    return 0;
}