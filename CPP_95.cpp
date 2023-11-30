bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        for(int i = 0; i < key.length(); ++i){
            if(islower(key[i])){
                allUpperCase = false;
            }
            else if(isupper(key[i])){
                allLowerCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}