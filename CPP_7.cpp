bool issame(vector<string> a, vector<string> b) {
    bool same = true;
    if(a.size() != b.size()) same = false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) same = false;
    }
    return same;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos){
            bool same = true;
            for(string str : strings){
                if(!str.find(substring) && !same) break;
                if(str == s) same = false;
            }
            if(same) result.push_back(s);
        }
    }
    return result;
}