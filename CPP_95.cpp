bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool is_all_lower = true;
    bool is_all_upper = true;
    for(auto const &entry : dict) {
        string key = entry.first;
        bool is_lower = true;
        bool is_upper = true;
        for(char c : key){
            if(!islower(c)){
                is_lower = false;
            }
            if(!isupper(c)){
                is_upper = false;
            }
        }
        if(!is_lower){
            is_all_lower = false;
        }
        if(!is_upper){
            is_all_upper = false;
        }
    }
    return is_all_lower || is_all_upper;
}