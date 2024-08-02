#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size();
    int m = target.size();
    
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int k = i; k < i + m; ++k) {
                indices.push_back(k);
            }
        }
    }

    if (indices.size() == 0) {
        return {-1};
    }
    
    return indices;
}

int main() {
    // Test cases
    std::vector<int> indices1 = findIndicesOfSubstring("ababab", "aba");  
    std::vector<int> indices2 = findIndicesOfSubstring("AAAAA", "AA");    

    return 0;
}