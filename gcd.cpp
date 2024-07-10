#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0;
    while (i <= text.length() - target.length()) {
        size_t pos = text.find(target);
        if (pos != string::npos) {
            result.push_back(pos);
            i = pos + target.length();
        } else {
            break;
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