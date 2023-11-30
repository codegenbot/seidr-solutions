bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool allLower = true;
    bool allUpper = true;
    for(auto itr = dict.begin(); itr != dict.end(); ++itr){
        string key = itr->first;
        for(char c : key){
            if(islower(c)){
                allUpper = false;
            } else if(isupper(c)){
                allLower = false;
            }
        }
    }
    return allLower || allUpper;
}