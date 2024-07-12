Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allUpper = true, allLower = true;
    
    if (dict.empty()) return false; // Empty map
    
    for (auto &p : dict) {
        if (isupper(p.first[0])) allLower = false;
        else if (islower(p.first[0])) allUpper = false;
    }
    
    return allUpper || allLower;
}