#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
            // If the target string overlaps itself in the text
            // Add all overlapping indices including the current index
            while (i + targetLen < textLen && text.substr(i, targetLen) == target) {
                i += targetLen;
                result.push_back(i);
            }
        }
    }

    return result;
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << gcd(m, n) << endl;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}