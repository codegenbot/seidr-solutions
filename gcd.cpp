#include <vector>
using namespace std;

int gcd(const int a, const int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) return indices;
    for (int i = 0; i <= static_cast<int>(text.size()) - static_cast<int>(target.size()); ++i) {
        if (text.substr(i, static_cast<int>(target.size())) == target) {
            for (int j = 0; j < static_cast<int>(target.size()); ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}