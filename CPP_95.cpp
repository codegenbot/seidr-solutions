bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        // Check if all keys are in lower case
        for(char c : key){
            if(isupper(c)){
                all_lower = false;
                break;
            }
        }
        
        // Check if all keys are in upper case
        for(char c : key){
            if(islower(c)){
                all_upper = false;
                break;
            }
        }
        
        // If both conditions fail for any key, return false
        if(!all_lower && !all_upper){
            return false;
        }
    }
    
    return true;
}