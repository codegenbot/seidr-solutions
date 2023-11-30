bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); it++){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(key != toLower(key)){
            allLower = false;
        }
        
        if(key != toUpper(key)){
            allUpper = false;
        }
        
        if(!allLower && !allUpper){
            return false;
        }
    }
    
    return true;
}