#include <vector>
#include <string>

bool issame(vector<std::string> a, vector<std::string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<std::string> filter_by_prefix(vector<std::string> strings, std::string prefix){
    vector<std::string> result;
    for(std::string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}