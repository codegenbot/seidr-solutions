Here is the completed code:

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto& pair : dict) {
        string key = pair.first;
        if(!allLower && !allUpper) break;
        allLower &= islower(key[0]);
        allUpper &= isupper(key[0]);
    }

    return allLower || allUpper;
}