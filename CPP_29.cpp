#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    assert(filter_by_prefix(strings, prefix) == vector<string>({"xxx", "xxxAAA", "xxx"}));
}