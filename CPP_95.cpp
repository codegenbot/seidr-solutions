bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(const auto &entry : dict){
        for(const auto &ch : entry.first){
            if(islower(ch)){
                all_upper = false;
            } else if(isupper(ch)){
                all_lower = false;
            }
        }
    }
    
    return all_lower || all_upper;
}