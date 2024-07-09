bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto p : dict){
        string key = p.first;
        if(!islower(strtol(key.c_str(), NULL, 10)) && !isupper(key.c_str())){
            allLower = false;
            allUpper = false;
            break;
        }
        else{
            if(!allLower) allUpper = false;
        }
    }

    return (allLower || allUpper);
}