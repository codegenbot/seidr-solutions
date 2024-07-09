```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<vector<string>> total_match(vector<string> a, vector<vector<string>> b){
    vector<vector<string>> matches;
    for(const auto& pair: {make_pair(a, {}), make_pair({}, a)}){
        if(issame(pair.first, pair.second)){
            matches.push_back(pair);
        }
    }
    return matches;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}