Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!pair.first.empty() && !islower(pair.first[0])) {
            allLower = false;
            break;
        }
        if (!pair.second.empty() && !isupper(pair.second[0])) {
            allUpper = false;
            break;
        }
    }

    return (allLower || allUpper);
}