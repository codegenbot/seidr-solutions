Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    for (auto &it : dict) {
        if (!all_of(it.first.begin(), it.first.end(), ::islower) &&
            !all_of(it.first.begin(), it.first.end(), ::isupper)) {
            return false;
        }
    }

    return true;
}