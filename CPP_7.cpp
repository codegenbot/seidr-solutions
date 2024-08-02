#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<vector<string>> group_by_substring(vector<string> strings, string substring){
    map<string, vector<string>> result;
    for(string s : strings){
        if(s.find(substring) != string::npos){
            string prefix = s.substr(0, s.find(substring));
            if(result.find(prefix) == result.end())
                result[prefix] = vector<string>();
            result[prefix].push_back(s);
        }
    }
    return vector<vector<string>>(result.begin(), result.end());
}