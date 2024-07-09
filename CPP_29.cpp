```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_same(std::string a, std::string b){
    return a == b;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0) 
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    std::vector<std::string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx");
    assert(is_same({{"xxx", "xxxAAA", "xxx"}}, {result.begin(), result.end()}));
    return 0;
}