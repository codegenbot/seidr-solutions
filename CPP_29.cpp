```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> input = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    
    assert(issame(filter_by_prefix(input, "xxx"), expected));
    return 0;
}