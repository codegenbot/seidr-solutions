#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        if (!str.empty()) {
            result += str + ", ";
        }
    }
    
    // Remove the trailing space and comma
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }
    if (result.size() > 2) {
        result.pop_back();
        result.pop_back();
    }
    
    return result;
}

int main() {
    std::vector<std::string> strings = {"Hello", "world", "", "!!!"};
    std::cout << concatenate(strings) << std::endl;

    return 0;
}