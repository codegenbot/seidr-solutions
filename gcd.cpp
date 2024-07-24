#include <vector>
using namespace std;

int gcd(const string a, const string b) {
    if (b == "") return a;
    return gcd(b, a.substr(0, a.length() % b.length()));
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) return indices;
    for (int i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            for (int z = 0; z < target.length(); ++z) {
                indices.push_back(i + z);
            }
        }
    }
    return indices;
}