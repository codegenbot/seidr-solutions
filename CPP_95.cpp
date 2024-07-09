Here is the completed code:

bool check_map_case(map<string, string> dict) {
    bool allUpper = true;
    bool allLower = true;

    if(dict.empty()) {
        return false;
    }

    for(auto it = dict.begin(); it != dict.end(); it++) {
        if(toupper(it->first).find(char(97)) != string::npos || 
           tolower(it->first).find(char(65)) != string::npos) {
            allUpper = false;
            allLower = false;
            break;
        } else if(allUpper) {
            allUpper = true;
        } else if(allLower) {
            allLower = true;
        }
    }

    return allUpper || allLower;
}