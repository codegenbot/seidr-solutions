```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}
bool issame(vector<string> a,vector<string>b){
    for(auto str : a) {
        if (find(b.begin(), b.end(), str) == b.end()) 
            return false;
    }
    return true;
}