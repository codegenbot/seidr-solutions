#include <iostream>
#include <string>
#include <cstring>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    for (size_t i = 0; i < text.size() - target.size() + 1; ++i) {
        if (memcmp(text.c_str() + i, target.c_str(), target.size()) == 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}