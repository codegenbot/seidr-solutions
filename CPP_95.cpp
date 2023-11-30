bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(char c : key){
            if(islower(c)){
                allUpperCase = false;
            }
            else if(isupper(c)){
                allLowerCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}