Here is the completed code:

bool check_map_case(map<string,string> dict){
    bool allLower = true;
    bool allUpper = true;

    for(auto &pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper)
            return false;

        if(allLower && !islower(key[0]))
            allLower = false;
        if(allUpper && !isupper(key[0]))
            allUpper = false;
    }

    if(dict.empty())
        return false;

    return allLower || allUpper;
}