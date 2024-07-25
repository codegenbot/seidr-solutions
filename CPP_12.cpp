```cpp
#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    std::string result = strings[0];
    for (const auto& s : strings) {
        if (s.length() > result.length()) {
            result = s;
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"x", "yyy", "zzzz", "www", "kkkk", "abc"};
    assert(longest(strings) == "zzzz");
    return 0;
}