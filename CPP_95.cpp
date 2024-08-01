Here is the completed code:

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for(auto p : dict) {
        string key = p.first;
        if(!all_lower && !all_upper) break;
        if(all_lower && !islower(key[0])) all_lower = false;
        if(all_upper && !isupper(key[0])) all_upper = false;
    }

    return all_upper || all_lower;
}