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
    int count = 0;
    for(int i = 0; i < b.size(); i++){
        if(issame(b[i], {a})){
            count++;
        }
    }
    vector<vector<string>> result;
    for(int i = 0; i < count; i++){
        result.push_back({a});
    }
    return result;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}