#include <vector>
#include <string>

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i=0; i<str.length(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}