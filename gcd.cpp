#include <vector>
#include <string>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t index = 0;

    while (index <= text.length() - target.length()) {
        size_t found = static_cast<size_t>(text.find(target, index));
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
    std::vector<int> indices = indicesOfSubstring("hello", "ll");
    // Print or use the results as needed...
    return 0;
}