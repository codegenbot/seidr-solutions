```cpp
#include <vector>
#include <cassert>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
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