// main.cpp
#include <iostream>
#include <vector>
#include <string>
#include "library.h"

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int idx : result) {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    return 0;
}