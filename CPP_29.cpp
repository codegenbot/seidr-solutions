```cpp
bool issame(vector<string> a, vector<string> b){
    if(a == b)
        return true;
    else
        return false;
}

vector<vector<string>> split(vector<string> strings, string prefix){
    vector<vector<string>> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back({s});
    }
    return result;
}