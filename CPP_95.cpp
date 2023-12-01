#include <map>
#include <string>
#include <cassert>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(key.empty()){
            return false;
        }
        
        if(key != tolower(key)){
            all_lower = false;
        }
        
        if(key != toupper(key)){
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}

int main() {
    assert (check_dict_case({}) == false);

    return 0;
}