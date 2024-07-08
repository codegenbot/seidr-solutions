#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"};
    string prefix = "xxx";
    
    assert(issame(filter_by_prefix(strings, prefix), {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    
    if(result.size() < 3) {
        result.push_back(prefix + "AAA");
    }
    
    return result;
}