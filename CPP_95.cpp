bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }

    bool isLower = true;
    bool isUpper = true;

    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;

        for(int i = 0; i < key.length(); i++){
            if(islower(key[i])){
                isUpper = false;
            }
            else if(isupper(key[i])){
                isLower = false;
            }
        }
    }

    return isLower || isUpper;
}