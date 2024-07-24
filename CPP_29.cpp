```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto s : strings) {
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool isEqual(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(isEqual(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
}