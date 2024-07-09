```cpp
#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"x", "y", "z", "w", "k"};
    std::cout << concatenate(strings) << std::endl;
    return 0;
}