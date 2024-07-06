bool check_dict_case(map<string,string> dict){
    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        bool all_upper = true, all_lower = true;
        for(char c : key) {
            if(c >= 'A' && c <= 'Z') {
                all_lower = false;
            }
            else if(c >= 'a' && c <= 'z') {
                all_upper = false;
            }
        }
        if(!all_upper && !all_lower) {
            return false;
        }
    }
    return dict.empty();
}