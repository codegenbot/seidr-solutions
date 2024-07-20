bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    bool all_upper = true, all_lower = true;
    for(auto p : dict){
        string key = p.first;
        if(!all_upper && !all_lower) break;
        for(char c : key){
            if(c >= 'a' && c <= 'z') all_upper = false;
            else if(c >= 'A' && c <= 'Z') all_lower = false;
        }
    }
    return all_upper || all_lower;
}