#include <vector>
#include <string>

bool issame(vector<string> strings1, vector<string> strings2){
    return strings1 == strings2;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}