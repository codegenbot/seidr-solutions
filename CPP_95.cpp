bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;

    bool allLowerCase = true;
    bool allUpperCase = true;

    for (const auto& pair : dict) {
        for (char c : pair.first) {
            if (!islower(c)) {
                allLowerCase = false;
                break;
            }
        }

        for (char c : pair.first) {
            if (!isupper(c)) {
                allUpperCase = false;
                break;
            }
        }
    }

    return allLowerCase || allUpperCase;
}