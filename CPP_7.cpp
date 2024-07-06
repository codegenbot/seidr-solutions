bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring) {
    vector<vector<string>> result;
    for(auto &s : strings){
        bool same = false;
        for(string substr: s){
            if(filter_by_substring(s, substr).size() > 1)
                same = true;
        }
        if(!same) {
            vector<string> temp;
            for (string str : s) {
                if(str.find(substring) != string::npos)
                    temp.push_back(str);
            }
            result.push_back(temp);
        }
    }
    return result;
}