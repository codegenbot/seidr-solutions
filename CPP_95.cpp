bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto const& pair : dict){
        for(char c : pair.first){
            if(islower(c))
                allUpper = false;
            else if(isupper(c))
                allLower = false;
        }
    }
    
    return allLower || allUpper;
}