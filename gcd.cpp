#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
            i += targetLen - 1; // skip overlapping targets
        }
    }
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}