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
    
    return indices;
}

int main() {
    // Add your testing code here
    std::vector<int> result1 = findIndicesOfSubstring("abracadabra", "abra");
    for (int index : result1) {
        cout << index << " ";
    }
    cout << endl;

    std::vector<int> result2 = findIndicesOfSubstring("ababab", "aba");
    for (int index : result2) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}