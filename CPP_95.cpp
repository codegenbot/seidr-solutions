// Problem description: 
// Given a dictionary of strings, check if all keys are in either lowercase or uppercase.

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) return false; // empty map
        if (!allLower && !allUpper) break; // not both lower and upper

        string key = pair.first;
        for (char& c : key) {
            if ((c >= 'a' && c <= 'z') != allLower) {
                allLower = false;
                allUpper = true;
                break;
            }
            if ((c >= 'A' && c <= 'Z') != allUpper) {
                allLower = true;
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}