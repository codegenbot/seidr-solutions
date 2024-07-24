#include <vector>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> findSubstringIndices(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) return indices;
    
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    
    return indices;
}