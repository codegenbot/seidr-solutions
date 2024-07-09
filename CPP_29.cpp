#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0) 
            result.push_back(str);
    }
    return result;
}

int testMain() {
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    std::vector<std::string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx");
    assert(isSame({{"xxx", "xxxAAA", "xxx"}}, {result.begin(), result.end()}));
    return 0;
}