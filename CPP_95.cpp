bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    bool lowercase = true;
    bool uppercase = true;

    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        for(int i = 0; i < key.length(); ++i){
            if(islower(key[i])){
                uppercase = false;
            }
            else if(isupper(key[i])){
                lowercase = false;
            }
        }
    }

    if(lowercase || uppercase){
        return true;
    }
    else{
        return false;
    }
}