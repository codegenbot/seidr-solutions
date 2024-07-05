#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for(const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"x", "y", "z", "w", "k"};
    std::cout << concatenate(strings) << std::endl;  // Should print "xyzwk"
    return 0;
}