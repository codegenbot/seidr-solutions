#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    while (start < text.length()) {
        int end = text.find(target, start);
        if (end == -1) break;
        result.push_back(end);
        start = end + 1;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}