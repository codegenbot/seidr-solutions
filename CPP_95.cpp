bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(char c : key){
            if(islower(c)){
                all_uppercase = false;
            } else if(isupper(c)){
                all_lowercase = false;
            }
        }
        
        if(!all_uppercase && !all_lowercase){
            return false;
        }
    }
    
    return true;
}