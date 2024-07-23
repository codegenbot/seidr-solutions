bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        if(!islower(pair.first[0])){
            all_lower = false;
        }
        if(!isupper(pair.first[0])){
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}