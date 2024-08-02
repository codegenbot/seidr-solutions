#include <string>
bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto p : dict) {
        string key = p.first;
        if(!allLower && !allUpper)
            break;
        if(allLower) {
            if(!islower(key[0]))
                allLower = false;
        }
        else {
            if(!isupper(key[0]))
                allUpper = false;
        }
    }

    return (allLower || allUpper);
}