```c
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<vector<string>> filter_by_prefix(vector<vector<string>> strings) {
    vector<vector<string>> result;
    for(auto &s : strings){
        if(issame(s, {"a", "b"}))
            result.push_back(s);
    }
    return result;
}

int main() {
    assert (filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"}, {{"xxx", "xxxAAA", "xxx"}}) == vector<vector<string>>({ {"xxx" }, {"xxx" } }), "Test failed");
    return 0;
}