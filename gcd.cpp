#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int j = 0; // Index of target string

    for (int i = 0; i <= text.length() - target.length(); i++) {
        while (j < target.length() && text[i + j] == target[j]) {
            if (j == target.length() - 1) {
                result.push_back(i);
                j = 0;
            } else
                j++;
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