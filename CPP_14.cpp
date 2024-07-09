#include <vector>
#include <string>

bool issame(const vector<string>& prefixes){
    for(int i = 1; i < prefixes.size(); ++i){
        if(prefixes[i] != prefixes[i-1]){
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}