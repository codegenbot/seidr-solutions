bool check_map_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool allLowerCase = true;
    bool allUpperCase = true;

    for (auto& pair : dict) {
        if (pair.first.empty() || !isalpha(pair.first[0])) {
            return false;
        }

        if (!islower(pair.first[0])) {
            allLowerCase = false;
        }

        if (!isupper(pair.first[0])) {
            allUpperCase = false;
        }
    }

    return allLowerCase || allUpperCase;
}