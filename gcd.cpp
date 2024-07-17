#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
            // Check for overlapping targets
            while (i + targetLen < textLen && text.substr(i, targetLen) == target) {
                i++;
                result.push_back(i);
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}