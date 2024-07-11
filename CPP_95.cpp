bool check_dict_case(map<string,string> dict){
    for(auto &it : dict) {
        if((it.first[0] >= 'A' && it.first[0] <= 'Z') != (it.second[0] >= 'A' && it.second[0] <= 'Z')) 
            return false;
    }
    return true;
}