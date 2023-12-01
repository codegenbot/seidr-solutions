bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto& kvp : dict){
        string key = kvp.first;
        for(char c : key){
            if(isupper(c)){
                isLower = false;
            }
            if(islower(c)){
                isUpper = false;
            }
        }
    }
    
    return isLower || isUpper;
}