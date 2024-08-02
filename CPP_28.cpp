```cpp
#include <iostream>
#include <vector>
#include <string>

std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for (const auto &s : strings) {
        result += s;
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }
    std::cout << concatenate(strings) << std::endl;
    return 0;
}