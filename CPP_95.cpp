bool check_map_case(map<string,string> dict){
    if(dict.empty())
        return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto& p : dict){
        for(auto& c : p.first){
            if(!islower(c)){
                all_lower = false;
                break;
            }
        }
        
        for(auto& c : p.first){
            if(!isupper(c)){
                all_upper = false;
                break;
            }
        }
    }
    
    return all_lower || all_upper;
}