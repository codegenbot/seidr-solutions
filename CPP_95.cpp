bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool lower = true;
    bool upper = true;
    for(const auto& entry : dict){
        const string& key = entry.first;
        if(key.empty()){
            return false;
        }
        if(islower(key[0])){
            upper = false;
        }
        else if(isupper(key[0])){
            lower = false;
        }
        else{
            return false;
        }
    }
    return lower || upper;
}