#include <string>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<std::int> result;
    int index = 0;

    while (index <= static_cast<int>(text.length() - target.length())) {
        size_t found = text.find(target, index);
        if (found != std::string::npos) {
            result.push_back(static_cast<int>(found));
            index = found + 1;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    int result = gcd(12, 15);
    std::vector<int> indices = indicesOfSubstring(std::string("hello"), std::string("ll"));
    return 0;