#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++){
        if(find(b.begin(),b.end(),a[i]) == b.end())
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(issame(split(s, substring), split(substring, substring)))
            result.push_back(s);
    }
    return result;
}

vector<string> split(string s, string substr){
    vector<string> res;
    size_t pos = 0;
    while((pos = s.find(substr)) != string::npos){
        res.push_back(s.substr(0, pos));
        s = s.substr(pos + substr.size());
    }
    res.push_back(s);
    return res;
}