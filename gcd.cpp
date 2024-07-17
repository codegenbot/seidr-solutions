#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
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