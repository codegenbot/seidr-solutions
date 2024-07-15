bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool isLower = true, isUpper = true;
    for(auto itr = dict.begin(); itr != dict.end(); ++itr){
        for(char& c : itr->first){
            if(isupper(c)){
                isLower = false;
            }
            if(islower(c)){
                isUpper = false;
            }
        }
    }
    
    return isLower || isUpper;
}