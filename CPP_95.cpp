bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto& pair : dict) {
        string key = pair.first;
        if(!allLower && !allUpper) break;
        if(allLower) {
            allLower &= tolower(key.begin(), key.end()) == key;
        }
        if(allUpper) {
            allUpper &= toupper(key.begin(), key.end()) == key;
        }
    }

    return allLower || allUpper;
}