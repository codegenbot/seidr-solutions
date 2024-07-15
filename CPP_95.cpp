bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    bool isLower = true, isUpper = true;
    for(auto& entry : dict) {
        if(entry.first != tolower(entry.first[0]))
            isLower = false;
        if(entry.first != toupper(entry.first[0]))
            isUpper = false;
    }
    return isLower || isUpper;
}