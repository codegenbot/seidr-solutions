bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool allLowerCase = true;
    bool allUpperCase = true;
    for(auto const& pair : dict){
        string key = pair.first;
        if(key.empty()){
            return false;
        }
        if(!isalpha(key[0])){
            return false;
        }
        if(islower(key[0])){
            allUpperCase = false;
        }
        if(isupper(key[0])){
            allLowerCase = false;
        }
    }
    return allLowerCase || allUpperCase;
}