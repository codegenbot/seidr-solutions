#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    std::cout << (concatenate({"x", "y", "z", "w", "k"}) == "xyzwk") << std::endl;
    return 0;
}