Here is the completed code:

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool allUpper = true;
    bool allLower = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if(!isupper(key[0])) allUpper = false;
        if(!islower(key[0])) allLower = false;
    }
    
    return allUpper || allLower;
}