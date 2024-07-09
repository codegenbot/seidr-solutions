```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& input_vector, const std::string& substring) {
    std::vector<std::string> output;
    for (const auto& str : input_vector) {
        if (str.find(substring) != std::string::npos)
            output.push_back(str);
    }
    return output;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::string b;
    std::cin >> b;

    std::vector<std::string> a = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> output = filter_by_substring(a, b);

    if (issame(output, {"grunt", "prune"}))
        std::cout << "The strings are same" << std::endl;
    else
        std::cout << "The strings are not same" << std::endl;

    return 0;
}