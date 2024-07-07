#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        for(string s : a[i].split(" "))
            if(find(b[i].begin(),b[i].end(),s) == b[i].end())
                return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos && issame(strings, vector<string>{s})){
            result.push_back(s);
        }
    }
    return result;
}