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
    if(b == 0)
        result = {{}};
    else
        result.push_back({a});
    return result;
}

int main() {
    assert(issame(total_match({"this"}, 0), {}));
    return 0;
}