bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!pair.first.empty()) {
            if (!(islower(pair.first[0]))) {
                allLower = false;
            }
            if (!(isupper(pair.first[0]))) {
                allUpper = false;
            }
        } else {
            return false;
        }
    }

    return (allLower && dict.size() > 0) || (allUpper && dict.size() > 0);
}