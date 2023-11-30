bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }

    bool isLowerCase = true;
    bool isUpperCase = true;

    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        for(char c : key){
            if(isupper(c)){
                isLowerCase = false;
            }
            if(islower(c)){
                isUpperCase = false;
            }
        }
    }

    return isLowerCase || isUpperCase;
}