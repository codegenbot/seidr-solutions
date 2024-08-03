#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;

bool check_dict_case(map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        for(char c : key){
            if(islower(c)){
                all_upper = false;
            } else if(isupper(c)){
                all_lower = false;
            }
        }
    }
    
    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);
    
    return 0;
}