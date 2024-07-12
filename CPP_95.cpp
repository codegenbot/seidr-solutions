Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            all_lower = false;
            all_upper = false;
            break;
        }
        if (all_lower) {
            for (char c : key) {
                if (toupper(c) != toupper(key[0])) {
                    all_lower = false;
                    break;
                }
            }
        }
        if (all_upper) {
            for (char c : key) {
                if (tolower(c) != tolower(key[0])) {
                    all_upper = false;
                    break;
                }
            }
        }
    }

    return all_lower || all_upper;
}