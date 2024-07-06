```
#include <vector>
#include <string>

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    string prefix = "xxx";
    
    assert(issame(filter_by_prefix(strings, prefix), {"xxx", "xxxAAA"}));
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str : strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}