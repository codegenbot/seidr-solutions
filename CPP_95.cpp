Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& p : dict) {
        auto key = p.first;
        if (!isupper(key[0]) && !islower(key[0])) {
            allUpper = false;
            allLower = false;
            break;
        } else if (isupper(key[0]) && islower(p.second[0])) {
            allUpper = false;
            allLower = true;
            break;
        } else if (islower(key[0]) && isupper(p.second[0])) {
            allUpper = true;
            allLower = false;
            break;
        }
    }

    return allUpper || allLower;
}