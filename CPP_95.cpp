bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool isLower = true;
    bool isUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(char c : key){
            if(islower(c)){
                isUpper = false;
            }
            if(isupper(c)){
                isLower = false;
            }
        }
    }
    
    return isLower || isUpper;
}