```
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) != string::npos) { 
            result.push_back(s);
        }
    }
    return result;
}