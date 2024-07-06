```cpp
bool issames(vector<string> a,vector<string>b1){
    if(a.size() != b1.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b1[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefixs(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;