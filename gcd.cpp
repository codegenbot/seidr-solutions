#include <vector>
#include <string>

std::vector<int> gcd(int a, int b) {
    std::vector<int> divisors;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    // Your code logic here

    return 0;
}