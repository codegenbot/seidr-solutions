bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool lowerCase = true;
    bool upperCase = true;
    for(auto itr = dict.begin(); itr != dict.end(); ++itr){
        string key = itr->first;
        if(key.empty()){
            return false;
        }
        for(char c : key){
            if(!isalpha(c)){
                return false;
            }
            if(islower(c)){
                upperCase = false;
            }
            if(isupper(c)){
                lowerCase = false;
            }
        }
    }
    return lowerCase || upperCase;
}