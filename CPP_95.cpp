Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) {
            return false;
        }
        string key = pair.first;
        if (!allLower && !allUpper) {
            break;
        }
        for (char c : key) {
            if ((isalpha(c) && islower(c)) && !allLower) {
                allLower = true;
                allUpper = false;
                break;
            } else if ((isalpha(c) && isupper(c)) && !allUpper) {
                allUpper = true;
                allLower = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}