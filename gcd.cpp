#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;
    while ((index = text.find(target)) != std::string::npos) {
        result.push_back(index);
        if (!target.empty() && target == text.substr(index, target.length())) {
            text.erase(0, index + target.length());
        } else {
            text.erase(0, index + 1);
        }
    }
    return result;
}

int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}