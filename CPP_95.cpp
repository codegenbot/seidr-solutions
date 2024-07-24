bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool isLowerCase = true;
    bool isUpperCase = true;

    for(auto const& entry : dict) {
        for(auto const& c : entry.first) {
            if (!islower(c)) {
                isLowerCase = false;
            }
            if (!isupper(c)) {
                isUpperCase = false;
            }
        }
    }

    return isLowerCase || isUpperCase;
}