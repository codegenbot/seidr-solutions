bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;
    bool is_lower = true, is_upper = true;
    for(auto& kvp : dict){
        if(!islower(kvp.first[0]))
            is_lower = false;
        if(!isupper(kvp.first[0]))
            is_upper = false;
    }
    return is_lower || is_upper;
}