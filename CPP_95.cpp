bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(const auto& kvp : dict){
        for(char c : kvp.first){
            if(!islower(c)){
                all_lower = false;
                break;
            }
        }
        
        for(char c : kvp.first){
            if(!isupper(c)){
                all_upper = false;
                break;
            }
        }
    }
    
    return all_lower || all_upper;
}