#include <iostream>
#include <map>
using namespace std;

bool check_dict_case(map<string,string>& dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(char c : key){
            if(islower(c)){
                allUpper = false;
            }
            else if(isupper(c)){
                allLower = false;
            }
        }
    }
    
    return allLower || allUpper;
}

int main(){
    assert(check_dict_case(map<string,string>()) == false);
    return 0;
}