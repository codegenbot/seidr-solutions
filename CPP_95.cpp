bool check_dict_case(map<string, string> dict) {
    if(dict.empty()) return false;
    bool upperCase = true;
    bool lowerCase = true;
    
    for(auto& pair : dict) {
        if(!isupper(pair.first[0])) upperCase = false;
        if(!islower(pair.first[0])) lowerCase = false;
    }
    
    return upperCase || lowerCase;
}