#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLength = text.length();
    int targetLength = target.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            result.push_back(i);
        }
    }

    return result;
}