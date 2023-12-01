#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(!islower(key[0])){
            allLower = false;
        }
        
        if(!isupper(key[0])){
            allUpper = false;
        }
        
        if(!allLower && !allUpper){
            return false;
        }
    }
    
    return true;
}

int main() {
    assert (check_map_case({}) == false);
    
    return 0;
}