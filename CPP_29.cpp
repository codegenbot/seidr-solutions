```cpp
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix);

bool equal(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> filteredStrings;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main(){
    assert(equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAA", "xxx"}, "xxx"), {"xxx", "xxxAA", "xxx"}));
    return 0;
}
```