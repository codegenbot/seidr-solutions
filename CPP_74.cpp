#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<vector<string>> total_match(vector<string> a, int b) {
    vector<vector<string>> result;
    for(int i = 0; i < b; i++){
        vector<string> temp;
        for(string s: a){
            temp.push_back(s + "1");
        }
        result.push_back(temp);
    }
    return result;
}

int main() {
    assert(issame(total_match({"this"}, 0), {}));
    return 0;
}