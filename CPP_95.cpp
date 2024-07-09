bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;
    
    bool is_lowercase = true;
    bool is_uppercase = true;
    
    for(auto const& pair : dict){
        for(char c : pair.first){
            if(islower(c)){
                is_uppercase = false;
            } else if(isupper(c)){
                is_lowercase = false;
            }
        }
    }
    
    return is_lowercase || is_uppercase;
}