```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    for(string s : b){
        if(find(a.begin(),a.end(),s) == a.end()){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos && issame({s},filter_by_substring({s},substring))){
            result.push_back(s);
        }
    }
    return result;
}