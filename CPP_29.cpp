```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> str1 = {"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"};
    string prefix1 = "xxx";
    
    vector<string> expected = filter_by_prefix(str1, prefix1);
    vector<string> str2 = {"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"};
    string prefix2 = "xxx";

    assert (issame(filter_by_prefix(str2, prefix2), expected));
    return 0;
}