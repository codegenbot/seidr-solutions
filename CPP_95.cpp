bool check_dict_case(map<string,string> dict){
    bool all_upper = true;
    bool all_lower = true;

    for(auto it = dict.begin(); it != dict.end(); ++it) {
        if(!islower(it->first[0]) && !isupper(it->first[0])) {
            return false;
        }
        if(islower(it->first[0])) {
            all_upper = false;
        } else {
            all_lower = false;
        }
    }

    return all_upper || all_lower;
}