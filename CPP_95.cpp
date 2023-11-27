#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

bool check_map_case(map<string, string>& dict){
    if(dict.empty()){
        return false;
    }
    
    bool upper = false;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(islower(key[0])){
            return false;
        }
        else if(isupper(key[0])){
            upper = true;
        }
        
        if(upper){
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(check_map_case({}) == false);
    
    return 0;
}