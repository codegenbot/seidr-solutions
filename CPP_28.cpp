#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for (const std::string& s : strings) {
        result += s;
    }
    return result;
}

int main() {
    std::vector<std::string> input_strings;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        input_strings.push_back(s);
    }
    std::cout << concatenate(input_strings) << std::endl;

    return 0;
}