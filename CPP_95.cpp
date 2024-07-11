bool check_map_case(map<string,string> dict){
    if(dict.empty()) return false;

    string case_type = tolower(dict.begin()->first);

    for(auto& pair : dict) {
        if(tolower(pair.first) != case_type)
            return false;
    }

    return true;
}