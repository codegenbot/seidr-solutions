#include <vector>
using namespace std;

int gcd(const int a, const int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) return indices;
    for (int i = 0; i <= (text.size() - target.size()); ++i) {
        if (text.substr(i, target.size()) == target) {
            for (int z = 0; z < target.size(); ++z) {
                indices.push_back(i + z);
            }
        }
    }
    return indices;
}