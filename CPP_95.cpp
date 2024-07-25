bool check_dict_case(map<string,string> dict){
    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!pair.first.empty()) {
            if (!all_lower && !all_upper) break;
            if (!islower(pair.first[0])) all_lower = false;
            if (!isupper(pair.first[0])) all_upper = false;
        }
    }

    return all_lower || all_upper;
}