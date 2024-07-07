```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a,vector<string> b){
    std::transform(a.begin(),a.end(),a.begin(),std::bind2nd(std::mem_fun(&std::string::tolower),0));
    std::transform(b.begin(),b.end(),b.begin(),std::bind2nd(std::mem_fun(&std::string::tolower),0));
    return a==b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}