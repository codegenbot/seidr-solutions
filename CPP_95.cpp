bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(const auto& entry : dict){
        if(entry.first.empty() || entry.second.empty()){
            return false;
        }
        if(!islower(entry.first[0])){
            all_lowercase = false;
        }
        if(!isupper(entry.first[0])){
            all_uppercase = false;
        }
    }
    
    return all_lowercase || all_uppercase;
}