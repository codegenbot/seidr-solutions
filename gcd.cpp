#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    if (target.empty()) return indices;
    for (int i = 0; i <= static_cast<int>(text.size()) - static_cast<int>(target.size()); ++i) {
        if (text.substr(i, target.size()) == target) {
            for (int z = 0; z < target.size(); ++z) {
                indices.push_back(i + z);
            }
        }
    }
    return indices;
}