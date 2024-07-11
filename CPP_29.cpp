```cpp
bool issame(vector<string> a, vector<string> b){
    if(a == b)
        return true;
    else
        return false;
}

vector<vector<string>> filter_by_prefix(vector<string> strings, string prefix){
    vector<vector<string>> result;
    for(string s : strings){
        bool same = false;
        for(auto v : result) {
            if(issame({s}, v)) {
                same = true;
                break;
            }
        }
        if(!same)
            result.push_back({s});
    }
    return result;
}