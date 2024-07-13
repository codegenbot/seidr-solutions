bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!all_lower && !all_upper) break;

        if (!all_lower) all_lower = all_to_lower(pair.first);

        if (!all_upper) all_upper = all_to_upper(pair.first);
    }

    return all_lower || all_upper;
}

bool all_to_lower(const string& str) {
    for (char& c : str) {
        c = tolower(c);
    }
    return true;
}

bool all_to_upper(const string& str) {
    for (char& c : str) {
        c = toupper(c);
    }
    return true;
}