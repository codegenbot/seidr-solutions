bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& entry : dict){
        for(auto const& c : entry.first){
            if(!islower(c)){
                all_lowercase = false;
                break;
            }
        }
        
        for(auto const& c : entry.first){
            if(!isupper(c)){
                all_uppercase = false;
                break;
            }
        }
    }
    
    return all_lowercase || all_uppercase;
}