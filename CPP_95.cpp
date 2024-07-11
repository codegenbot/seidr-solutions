bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto const& pair : dict){
        for(auto const& c : pair.first){
            if(islower(c)){
                isUpper = false;
            } else if(isupper(c)){
                isLower = false;
            }
        }
    }
    
    return isLower || isUpper;
}