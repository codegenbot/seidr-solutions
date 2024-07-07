```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    bool result = true;
    for(string s : a){
        if(find(b.begin(),b.end(),strtol(s.c_str(),0,10)) == b.end())
            result = false;
    }
    return result;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        transform(substring.begin(),substring.end(),substring.begin(),::tolower);
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}