bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }

    bool lowerCase = true;
    bool upperCase = true;

    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;

        if(key.empty()){
            return false;
        }

        if(key[0] >= 'a' && key[0] <= 'z'){
            upperCase = false;
        }else if(key[0] >= 'A' && key[0] <= 'Z'){
            lowerCase = false;
        }else{
            return false;
        }
    }

    return lowerCase || upperCase;
}