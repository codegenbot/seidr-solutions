#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int start = 0;
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos == std::string::npos) {
            break;
        }
        result.push_back(pos);
        start = pos + 1;
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