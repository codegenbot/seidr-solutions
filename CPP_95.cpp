bool check_dict_case(map<string,string> dict){
    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!all_upper && !all_lower)
            return false;

        for (char &c : key) {
            if (isupper(c))
                all_upper = false;
            else if (islower(c))
                all_lower = false;
        }
    }

    return all_upper || all_lower;
}