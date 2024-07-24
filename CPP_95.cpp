bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;
    
    bool lowerCase = true;
    bool upperCase = true;
    
    for(auto const& pair : dict){
        for(char c : pair.first){
            if(islower(c)){
                upperCase = false;
            } else if(isupper(c)){
                lowerCase = false;
            }
        }
    }
    
    return lowerCase || upperCase;
}