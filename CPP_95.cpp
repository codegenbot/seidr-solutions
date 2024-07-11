bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    
    bool allLower = true;
    bool allUpper = true;
    
    for (auto& pair : dict) {
        string key = pair.first;
        
        if ((isalpha(key[0]) && isupper(key[0])) || (isalpha(key[0]) && islower(key[0]))) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) {
            break;
        }
        
        for (int i = 1; i < key.size(); ++i) {
            if ((isalpha(key[i]) && isupper(key[i])) || (isalpha(key[i]) && islower(key[i]))) {
                allLower = false;
                allUpper = false;
                break;
            } else if (!allLower && !allUpper) {
                break;
            }
        }
        
        if (!allLower && !allUpper) break;
    }
    
    return (allLower || allUpper);
}