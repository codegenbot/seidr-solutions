#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0;
    while (i <= text.length() - target.length()) {
        int j = 0;
        while (j < target.length() && text[i + j] == target[j]) {
            if (j == target.length() - 1) {
                result.push_back(i);
                i += j + 1;
                break;
            }
            j++;
        }
        i++;
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