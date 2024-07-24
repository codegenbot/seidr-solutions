#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; i++) {
        bool isMatch = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}