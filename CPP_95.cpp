#include <string>
#include <map>
#include <iostream>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        for(char c : pair.first){
            if(islower(c)){
                all_upper = false;
            } else if(isupper(c)){
                all_lower = false;
            }
        }
    }
    
    return all_lower || all_upper;
}

int main(){
    map<string, string> dict;
    
    if(check_dict_case(dict)){
        cout << "Dictionary keys have inconsistent cases." << endl;
    } else {
        cout << "Dictionary keys have consistent case." << endl;
    }
    
    return 0;
}