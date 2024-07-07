Here is the completed code:

bool check_dict_case(map<string,string> dict){
    bool allLower = true;
    bool allUpper = true;

    for(auto& pair : dict) {
        if(dict.empty())
            return false;
        
        string key = pair.first;
        if(!allLower && !allUpper)
            break;
        
        if(toupper(key) != key && tolower(key) != key) {
            allLower = false;
            allUpper = false;
        } else if(toupper(key) != key) {
            allLower = false;
        } else {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}