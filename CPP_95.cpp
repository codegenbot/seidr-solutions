Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    
    bool allLower = true;
    bool allUpper = true;
    
    for (auto &pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        
        if (islower(pair.first[0])) {
            allUpper = false;
        } else {
            allLower = false;
        }
    }
    
    return allLower || allUpper;
}