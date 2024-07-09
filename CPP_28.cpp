```
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
    const std::vector<std::string> input = {"x", "y", "z", "w", "k"};
    std::cout << concatenate(input) << std::endl;
    return 0;
}