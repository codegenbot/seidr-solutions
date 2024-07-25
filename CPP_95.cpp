bool check_dict_case(map<string,string> dict){
    bool all_lower = true;
    bool all_upper = true;

    for(auto &pair : dict) {
        if(dict.empty()) return false; // Check if map is empty
        string key = pair.first;
        if((!islower(key[0])) && (!isupper(key[0]))) {
            all_lower = false;
            all_upper = false;
            break;
        }
        else if(islower(key[0]))
            all_lower &= true;
        else 
            all_upper &= true;
    }

    return (all_lower || all_upper);
}