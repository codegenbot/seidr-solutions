bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); it++){
        string key = it->first;
        
        if(key != "" && !islower(key[0])){
            allLower = false;
        }
        
        if(key != "" && !isupper(key[0])){
            allUpper = false;
        }
    }
    
    return allLower || allUpper;
}