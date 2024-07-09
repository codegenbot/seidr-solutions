vector<bool> isSame(vector<vector<string>>& strings, string substring) {
    vector<bool> result;
    for (const auto& s : strings) {
        if (s[0].find(substring) != string::npos || s[1].find(substring) != string::npos) {
            result.push_back(true);
        } else {
            result.push_back(false);
        }
    }
    return result;
}

vector<string> filter_by_substring(vector<vector<string>>& strings, string substring){
    vector<string> result;
    for (const auto& s : strings) {
        if(issame(s, substring)[0] || issame(s, substring)[1]) {
            result.push_back(s[0]);
        }
    }
    return result;
}