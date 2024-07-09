#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;

    while (index <= text.length() - target.length()) {
        size_t found = text.find(target);
        if (found != std::string::npos) {
            result.push_back(found);
            index = found + 1;
        } else {
            break;
        }
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}