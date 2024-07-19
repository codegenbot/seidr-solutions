bool check_dict_case(map<string,string> dict){
    for(auto& p : dict){
        if(p.first.length() > 1 && !isupper(p.first[0]) && !islower(p.first[0])){
            return false;
        }
    }
    if(dict.empty()) return false;
    bool allUpper = true, allLower = true;
    for(auto& p : dict){
        if(isupper(p.first[0])) allLower = false;
        else allUpper = false;
    }
    return allUpper || allLower;
}