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
    vector<vector<string>> result;
    for(auto &sentence : a) {
        for(auto &word : sentence) {
            bool found = false;
            for(auto &match : b) {
                if(issame({word}, match)) {
                    found = true;
                    break;
                }
            }
            if(!found)
                continue;
            result.push_back({word});
        }
    }
    return result;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}