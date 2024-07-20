bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    string first_key = *(dict.begin()->first);
    for(auto it= dict.begin();it!=dict.end();++it){
        if(!all_of(it->first.begin(),it->first.end(), ::tolower == first_key.begin(), ::tolower + (first_key.size()))){
            return false;
        }
    }
    return true;
}