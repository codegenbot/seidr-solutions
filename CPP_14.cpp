#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i=0; i < str.length(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}

int main(){
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}