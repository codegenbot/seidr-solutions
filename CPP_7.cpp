#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size();i++){
        if(find(b.begin(),b.end(),a[i]) == b.end())
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(issame(split(s,substring),split(substring,substring)))
            result.push_back(s);
    }
    return result;
}

vector<string> split(string str,string token){
    vector<string> result;
    size_t pos = 0;
    while((pos=str.find(token)) != string::npos) {
        result.push_back(str.substr(0,pos));
        str.erase(0, pos + token.size());
    }
    result.push_back(str);
    return result;
}