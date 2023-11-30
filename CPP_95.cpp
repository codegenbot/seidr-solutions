bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(int i=0; i<key.length(); i++){
            if(islower(key[i])){
                allUpper = false;
            }
            if(isupper(key[i])){
                allLower = false;
            }
        }
    }
    
    return allLower || allUpper;
}