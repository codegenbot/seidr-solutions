bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    
    bool allLower = true;
    bool allUpper = true;
    
    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        
        if (!allLower) allLower = all(0, pair.first.length(), [&] (int i) { return toupper(pair.first[i]) == toupper(pair.second[i]); });
        
        if (!allUpper) allUpper = all(0, pair.first.length(), [&] (int i) { return tolower(pair.first[i]) == tolower(pair.second[i]); });
    }
    
    return allLower && allUpper;
}