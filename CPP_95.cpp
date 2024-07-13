bool check_dict_case(map<string,string> dict){
    bool all_upper = true;
    bool all_lower = true;

    for(auto &pair : dict) {
        if(pair.first.length() > 0 && !isupper(pair.first[0])) {
            all_upper = false;
            all_lower = false;
            break;
        }
    }

    return (all_upper || all_lower);
}