bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool isLowerCase = true;
    bool isUpperCase = true;
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        for(char c : key){
            if(islower(c)){
                isUpperCase = false;
            }else if(isupper(c)){
                isLowerCase = false;
            }
        }
    }
    return isLowerCase || isUpperCase;
}