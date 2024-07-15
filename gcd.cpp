#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t n = text.size();
    size_t m = target.size();
    
    for (size_t i = 0; i <= n - m; ++i) {
        bool found = true;
        for (size_t j = 0; j < m; ++j) {
            if (text.at(i + j) != target.at(j)) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}