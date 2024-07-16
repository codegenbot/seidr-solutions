bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool is_lower = true;
    bool is_upper = true;
    
    for(auto const& pair : dict){
        for(char c : pair.first){
            if(islower(c)){
                is_upper = false;
            } else if(isupper(c)){
                is_lower = false;
            }
        }
    }
    
    return is_lower || is_upper;
}