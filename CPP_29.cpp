```cpp
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> test = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    std::vector<std::string> output = filterByPrefix(test, "xxx");
    for (const auto& s : output) {
        if (!s.compare("xxx")) continue;
        s.replace(0, 3, "");
        assert(s == "AAA");
    }
    return 0;
}