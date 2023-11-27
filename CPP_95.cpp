bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(char c : key){
            if(isupper(c)){
                allLowerCase = false;
            }
            if(islower(c)){
                allUpperCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}