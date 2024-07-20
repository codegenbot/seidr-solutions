#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int lastIndex = 0;

    while ((lastIndex = text.find(target, lastIndex)) != std::string::npos) {
        result.push_back(lastIndex);
        lastIndex += 1; // to avoid overlapping match
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0) 
        return a; 
    else 
        return gcd(b, a % b); 
}

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << gcd(a, b) << "\n";

    return 0;
}