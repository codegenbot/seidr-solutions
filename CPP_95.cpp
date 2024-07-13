Here is the completed code:

bool check_map_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0])) {
            all_lower = false;
        }
        if (!isupper(pair.first[0])) {
            all_upper = false;
        }
    }

    return all_lower && all_upper;
}