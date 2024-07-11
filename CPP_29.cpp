#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAAC", "xxx"};
    string prefix = "xxx";
    bool res = issame(filter_by_prefix(strings, prefix), {"xxx", "xxxAAA", "xxx"});
    assert(res);
}