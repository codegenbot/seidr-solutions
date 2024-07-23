#include <vector>

using namespace std;

std::vector<int> indicesOfSubstring(string text, string target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}