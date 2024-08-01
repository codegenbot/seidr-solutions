#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textSize = text.length();
    int targetSize = target.length();

    for (int i = 0; i <= textSize - targetSize; i++) {
        if (text.substr(i, targetSize) == target) {
            result.push_back(i);
        }
    }

    return result;
}