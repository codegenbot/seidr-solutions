#include <vector>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) return vector<int>();
    for (int i = 0; i <= static_cast<int>(text.size()) - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            for (int z = 0; z < target.size(); ++z) {
                indices.push_back(i + z);
            }
        }
    }
    return indices;
}