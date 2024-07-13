Here is the completed code:

bool check_dict_case(map<string,string> dict){
    bool allLower = true, allUpper = true;

    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        for(char & c : key) {
            if(isupper(c)) allLower = false;
            if(islower(c)) allUpper = false;
        }
    }

    return !dict.empty() && (allLower || allUpper);
}