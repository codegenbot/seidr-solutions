#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    std::cout << "Test passed!" << std::endl;

    std::vector<std::string> user_input;
    std::string input;
    std::cout << "Enter strings to concatenate (type END to stop):" << std::endl;
    while (std::cin >> input && input != "END") {
        user_input.push_back(input);
    }

    std::cout << "Concatenated result: " << concatenate(user_input) << std::endl;
    return 0;
}