bool check_map_case(map<string,string> dict){
    bool allLower = true;
    bool allUpper = true;

    if(dict.empty()) return false;

    for(auto &it : dict){
        string key = it.first;
        for(char &c: key){
            if(isupper(c)) allLower = false;
            else if(islower(c)) allUpper = false;
            else break;
        }
        if(!allLower && !allUpper) return false;
    }

    return allLower || allUpper;
}