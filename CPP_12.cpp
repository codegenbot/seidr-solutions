#include <vector>
#include <string>

int main() {
    std::vector<std::string> strings = {"x", "yyy", "zzzz", "www", "kkkk", "abc"};
    assert(longest(strings) == "zzzz");
    return 0;
}

std::string longest(const std::vector<std::string>& strings) {
    std::string result = strings[0];
    for (const auto& str : strings) {
        if (str.length() > result.length()) {
            result = str;
        }
    }
    return result;
}