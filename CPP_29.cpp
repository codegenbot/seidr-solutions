```cpp
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.substr(0, prefix.length()) == prefix){
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}
```