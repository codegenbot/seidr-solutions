bool check_dict_case(map<string,string> dict){
    bool all_upper = true;
    bool all_lower = true;

    for(auto p : dict) {
        string key = p.first;
        if (!all_upper && !all_lower) break;
        if (isupper(key[0])) {
            all_lower = false;
        } else if (islower(key[0])) {
            all_upper = false;
        }
    }

    return all_upper || all_lower;
}