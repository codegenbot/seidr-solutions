#include <map>
bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool lower = false;
    bool upper = false;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(islower(key[0])){
            lower = true;
        }
        else if(isupper(key[0])){
            upper = true;
        }
        
        if(lower && upper){
            return false;
        }
    }
    
    return true;
}