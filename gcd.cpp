#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; i++) {
        if (i + m > n) break;
        int j = 0;
        while (j < m && text[i + j] == target[j]) j++;
        if (j == m) result.push_back(i);
        i += j;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}