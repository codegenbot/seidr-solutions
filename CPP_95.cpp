bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    string firstKey = *(dict.begin())->first;
    for(auto it=dict.begin();it!=dict.end();++it) {
        if(tolower(firstKey) != tolower(it->first) && toupper(firstKey) != toupper(it->first))
            return false;
    }
    return true;
}