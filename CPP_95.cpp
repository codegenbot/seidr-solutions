bool check_dict_case(map<string,string> dict){
    bool allLower = true;
    bool allUpper = true;

    for(auto it = dict.begin(); it != dict.end(); ++it) {
        if(!allLower && !allUpper)
            return false;
        
        string key = it->first;
        if((isupper(key[0])) || (!islower(key[0])))
            allLower = false;
        else
            allUpper = false;
    }
    
    return allLower || allUpper;
}