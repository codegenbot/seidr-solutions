#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    for(string s : a){
        if(find(b.begin(),b.end(),s) == b.end())
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos && issame(split(s,substring),split(substring,substring)))
            result.push_back(s);
    }
    return result;
}

vector<string> split(string str,string substr){
    vector<string> res;
    size_t pos = 0;
    while((pos=str.find(substr)) != string::npos){
        res.push_back(str.substr(0,pos));
        str= str.substr(pos+substr.length());
        pos = 0;
    }
    res.push_back(str);
    return res;
}