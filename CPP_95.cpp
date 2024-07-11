bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;

    bool all_upper = true;
    bool all_lower = true;

    for(auto& pair : dict) {
        string key = pair.first;
        for(char & c: key) {
            if(isupper(c)) {
                all_lower = false;
                break;
            }
            else if(islower(c)) {
                all_upper = false;
                break;
            }
        }
    }

    return (all_upper && all_lower);
}