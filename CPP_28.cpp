#include <string>
#include <vector>

int concatenate(std::vector<std::string> strings) {
    int result = 0;
    for (const auto& str : strings) {
        result += str.length();
    }
    return result;
}