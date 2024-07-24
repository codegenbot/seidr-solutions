```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> input = {"xxx", "asd", "xxy", "john doe", "xxxAaaA", "xxx"};
    const std::string prefix("xxx");
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    if (!issame(filter_by_prefix(input, prefix), expected)) {
        return 1;
    }
    return 0;
}