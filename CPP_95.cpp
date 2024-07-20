bool check_dict_case(map<string,string> dict){
    bool allLower = true;
    bool allUpper = true;

    for(auto& p : dict) {
        string key = p.first;
        if (!allLower) break;
        if (isupper(key[0])) {
            allLower = false;
            break;
        }
        for(char c : key) {
            if (islower(c)) {
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}