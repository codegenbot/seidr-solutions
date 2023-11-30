bool check_map_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool upperCase = true;
    bool lowerCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(char c : key){
            if(islower(c)){
                upperCase = false;
            }
            if(isupper(c)){
                lowerCase = false;
            }
        }
    }
    
    return upperCase || lowerCase;
}