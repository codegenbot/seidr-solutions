#include <iostream>
#include <string>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()).find(target) != std::string::npos) {
            std::cout << i << " ";
        }
    }

    return 0;
}