bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        if(pair.first.empty() || pair.first.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos){
            return false;
        }
        
        if(pair.first.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos){
            return false;
        }
        
        if(pair.first.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos){
            all_lower = false;
        }
        
        if(pair.first.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos){
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}