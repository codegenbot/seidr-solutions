bool check_dict_case(map<string,string> dict){
    bool all_upper = true;
    bool all_lower = true;

    for(auto p : dict) {
        if(p.first.empty()) return false; // empty map
        string key = p.first;
        if(!all_upper && !all_lower)
            break;
        for(char &c: key) {
            c = tolower(c);
            all_upper = false;
        }
    }

    return (all_upper || all_lower);
}