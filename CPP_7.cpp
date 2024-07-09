vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}

bool issame(vector<string> a,vector<vector<string>> b){
    for(auto str : a) {
        bool found = false;
        for(auto vec : b) {
            if(find(vec.begin(), vec.end(), str) != vec.end()) {
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}