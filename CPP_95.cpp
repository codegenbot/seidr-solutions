Here is the completed code:

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    bool allLower = true;
    bool allUpper = true;
    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if(!allLower && !allUpper) break;
        if(allLower && !islower(key[0])) allLower = false;
        if(allUpper && !isupper(key[0])) allUpper = false;
    }
    return allLower || allUpper;
}