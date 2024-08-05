bool check_dict_case(const unordered_map<string, int>& dict) {
    if(dict.empty()) return false;

    bool isLower = true, isUpper = true;
    for(auto const& pair : dict) {
        for(char c : pair.first) {
            if(islower(c)) {
                isUpper = false;
            } else if(isupper(c)) {
                isLower = false;
            }
        }
    }

    return isLower || isUpper;
}