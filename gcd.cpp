#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            result.push_back(i);
            // Add indices where the target string overlaps itself in the text
            while (i + targetLength < text.length()) {
                if (text.substr(i, targetLength) == target) {
                    result.push_back(i);
                    i++;
                } else {
                    break;
                }
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