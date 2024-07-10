#include <string>
using namespace std;

bool check_dict_case(map<string, string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        for(char c : key){
            if(!std::islower(c)){
                all_lower = false;
                break;
            }
        }
        
        for(char c : key){
            if(!std::isupper(c)){
                all_upper = false;
                break;
            }
        }
    }
    
    return all_lower || all_upper;
}