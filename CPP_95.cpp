bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isUpper = true;
    bool isLower = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(int i = 0; i < key.length(); ++i){
            if(isupper(key[i])){
                isLower = false;
            }
            if(islower(key[i])){
                isUpper = false;
            }
        }
    }
    
    return isUpper || isLower;
}