bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;
    
    bool lowerCase = true;
    bool upperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); it++){
        string key = it->first;
        
        // Check if all keys are in lower case
        for(int i=0; i < key.length(); i++){
            if(!islower(key[i])){
                lowerCase = false;
                break;
            }
        }
        
        // Check if all keys are in upper case
        for(int i=0; i < key.length(); i++){
            if(!isupper(key[i])){
                upperCase = false;
                break;
            }
        }
    }
    
    if(lowerCase || upperCase)
        return true;
    else
        return false;
}