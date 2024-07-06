```cpp
#include <vector>
#include <string>

std::string longest(std::vector<std::string> strings, int) {
    std::string result = strings[0];
    for (const auto& str : strings) {
        if (str.length() > result.length()) {
            result = str;
        }
    }
    return result;
}