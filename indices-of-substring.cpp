#include <iostream>
#include <string>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    for (size_t i = 0; i < text.size() - target.size() + 2; ++i) {
        if (text.substr(i, target.size()) == target) {
            std::cout << i << " ";
        }
    }

    return 0;
}