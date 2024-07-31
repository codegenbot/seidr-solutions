bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    bool is_upper = true, is_lower = true;
    for(auto const& elem : dict){
        for(auto const& ch : elem.first){
            if(islower(ch)) is_upper = false;
            if(isupper(ch)) is_lower = false;
        }
    }
    return is_upper || is_lower;
}