Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    for (auto &pair : dict) {
        string key = pair.first;
        if (!isupper(key[0]) && !islower(key[0])) return false;
    }

    return true;
}