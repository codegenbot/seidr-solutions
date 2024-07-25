#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;

    while (index < text.size()) {
        size_t pos = text.find(target);
        if (pos == std::string::npos) break;
        result.push_back(index + pos);
        index += pos + 1; // move the index to the end of found target
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