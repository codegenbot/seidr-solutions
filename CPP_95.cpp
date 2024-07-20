bool check_dict_case(map<string,string> dict){
    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if(isupper(key[0])) {
            for(auto x : dict) {
                if(islower(x.first[0])) return false;
            }
            return true;
        } else if(islower(key[0])) {
            for(auto x : dict) {
                if(isupper(x.first[0])) return false;
            }
            return true;
        }
    }
    return false;
}