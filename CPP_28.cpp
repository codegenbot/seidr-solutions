#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;

    for (const std::string& str : strings) {
        result += str;
    }

    return result;
}

int main() {
    std::vector<std::string> input1 = {};
    std::vector<std::string> input2 = {"a", "b", "c"};

    std::cout << concatenate(input1) << std::endl;
    std::cout << concatenate(input2) << std::endl;

    return 0;
}