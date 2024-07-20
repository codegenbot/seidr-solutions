Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = allUpper = false;
            break;
        } else if ((it->first[0] >= 'a' && it->first[0] <= 'z') !=
                   (it->first[0] >= 'A' && it->first[0] <= 'Z')) {
            allLower = allUpper = false;
            break;
        }
    }
    return allLower || allUpper;
}