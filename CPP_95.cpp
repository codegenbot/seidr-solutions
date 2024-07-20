bool check_dict_case(map<string,string> dict){
    for(auto& p : dict) {
        if((p.first.size() > 0 && isupper(p.first[0])) != (dict.begin()->first).size() > 0 && isupper((dict.begin()->first)[0])){
            return false;
        }
    }
    return true;
}