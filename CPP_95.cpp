bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto const& pair : dict){
        for(char c : pair.first){
            if(islower(c)){
                allUpperCase = false;
            } else if(isupper(c)){
                allLowerCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}