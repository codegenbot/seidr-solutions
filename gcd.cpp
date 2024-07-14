#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // Find the next occurrence
    }
    return result;
}

int greatestCommonDivisor(int a, int b) {
    if (b == 0)
        return a;
    else
        return greatestCommonDivisor(b, a % b);
}