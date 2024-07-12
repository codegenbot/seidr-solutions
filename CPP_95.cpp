bool check_map_case(map<string, string> dict) {
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto it = dict.begin(); it != dict.end(); ++it) {
        if(!allLower && !allUpper) break;
        if(allLower) {
            allLower &= (it->first).find((char)32) == string::npos; // find(' ') == -1
        }
        if(allUpper) {
            allUpper &= (it->first).find((char)32) == string::npos;
        }
    }

    return allLower || allUpper;
}