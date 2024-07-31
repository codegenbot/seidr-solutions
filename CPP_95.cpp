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

int main() {
    map<string, string> empty_dict;
    cout << check_dict_case(empty_dict) << endl;
    return 0;
}