bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        for(char c : key){
            if(!islower(c)){
                isLowerCase = false;
                break;
            }
        }
        
        for(char c : key){
            if(!isupper(c)){
                isUpperCase = false;
                break;
            }
        }
    }
    
    return isLowerCase || isUpperCase;
}