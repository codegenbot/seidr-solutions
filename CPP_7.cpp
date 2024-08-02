vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            bool found = false;
            for(string t : strings) {
                if(t.find(substring) != string::npos && t != s) {
                    found = true; break;
                }
            }
            if(!found) result.push_back(s);
        }
    }
    return result;
}