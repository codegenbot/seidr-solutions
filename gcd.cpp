#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const std::string& text, const int target) {
    vector<int> indices;
    if (std::to_string(target).empty()) return indices;
    std::string targetStr = std::to_string(target);
    for (size_t i = 0; i <= text.size() - targetStr.size(); ++i) {
        if (text.substr(i, targetStr.size()) == targetStr) {
            for (size_t j = 0; j < targetStr.size(); ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}