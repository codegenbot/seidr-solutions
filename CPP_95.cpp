Here is the completed code:

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    bool allUpper = true, allLower = true;
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        if(!allUpper && !allLower) break;
        if(allUpper && !isupper(key[0])) allUpper = false;
        if(allLower && !islower(key[0])) allLower = false;
    }
    return allUpper || allLower;
}