bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool isLowerCase = true;
    bool isUpperCase = true;
    for(auto it = dict.begin(); it != dict.end(); it++){
        string key = it->first;
        for(int i = 0; i < key.length(); i++){
            if(islower(key[i])){
                isUpperCase = false;
            }
            if(isupper(key[i])){
                isLowerCase = false;
            }
        }
    }
    return isLowerCase || isUpperCase;
}