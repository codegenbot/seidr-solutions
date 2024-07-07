```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(issame_helper(a[i],b[i]))
            return true;
    }
    return false;
}

bool issame_helper(string s1, string s2){
    vector<string> strings1 = filter_by_substring(split(s1," "), substring);
    vector<string> strings2 = filter_by_substring(split(s2," "), substring);
    if(!issame(strings1,strings2))
        return false;
    return true;
}

vector<string> split(string str, string delimiter){
    size_t pos = 0;
    vector<string> result;
    while((pos=str.find(delimiter)) != 0) {
        result.push_back(str.substr(0,pos));
        str.erase(0,pos + delimiter.size());
    }
    result.push_back(str);
    return result;
}