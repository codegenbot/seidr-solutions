bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        for(char c : key){
            if(!isalpha(c)){
                allLowerCase = false;
                allUpperCase = false;
                break;
            }
            if(islower(c)){
                allUpperCase = false;
            } else {
                allLowerCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}