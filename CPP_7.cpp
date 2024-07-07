```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    bool res = true;
    for(string s : a){
        if(find(b.begin(),b.end(),transform(s.begin(),s.end(),::tolower).str().c_str()) == b.end()){
            res = false;
            break;
        }
    }
    return res;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos || issame({s}, {transform(s.begin(),s.end(),::tolower).str()})){
            result.push_back(s);
        }
    }
    return result;
}