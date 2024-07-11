bool check_map_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            all_upper = false;
            all_lower = false;
            break;
        } else if (!isalpha(pair.first[0])) {
            return false;
        }

        if (!all_upper && !all_lower) break;

        if (!all_upper) continue;

        for (int i = 1; i < pair.first.size(); ++i) {
            if (!islower(pair.first[i]) && !isupper(pair.first[i])) {
                all_upper = false;
                break;
            }
        }

        if (!all_upper) continue;

        for (int i = 1; i < pair.first.size(); ++i) {
            if (isalpha(pair.first[i])) {
                all_lower = false;
                break;
            }
        }
    }

    return all_upper || all_lower;
}