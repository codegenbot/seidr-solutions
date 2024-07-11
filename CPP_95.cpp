bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_of(key.begin(), key.end(), ::islower) && !all_of(key.begin(), key.end(), ::isupper))
            return false;
    }

    return true;
}