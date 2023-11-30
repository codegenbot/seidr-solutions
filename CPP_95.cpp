bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool all_lower = true;
    bool all_upper = true;
    for(auto& pair : dict){
        string key = pair.first;
        if(key.empty()){
            return false;
        }
        if(!islower(key[0])){
            all_lower = false;
        }
        if(!isupper(key[0])){
            all_upper = false;
        }
        if(!all_lower && !all_upper){
            return false;
        }
    }
    return true;
}