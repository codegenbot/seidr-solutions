bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }

    bool lowerCase = true;
    bool upperCase = true;

    for(auto it = dict.begin(); it != dict.end(); it++){
        string key = it->first;
        for(char c : key){
            if(islower(c)){
                upperCase = false;
            }
            if(isupper(c)){
                lowerCase = false;
            }
        }
    }

    return lowerCase || upperCase;
}