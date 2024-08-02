```
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            throw std::runtime_error("Vectors contain different elements");
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings) {
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}