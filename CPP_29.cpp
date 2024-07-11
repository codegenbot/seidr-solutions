bool issame(vector<string> a,vector<string>b){
    return a == b;
}

vector<vector<string>> group_by_prefix(vector<vector<string>>& strings){
    map<string, vector<string>> result;
    for(auto& s : strings) {
        string prefix = s[0];
        for(string str : s) {
            if(str.find(prefix) != 0) break;
            result[prefix].push_back(str);
        }
    }
    return vector<vector<string>>(result.begin(), result.end());
}