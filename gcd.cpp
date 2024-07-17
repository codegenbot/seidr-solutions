#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int target_len = target.length();
    for (int i = 0; i <= text.length() - target_len; i++) {
        if (text.substr(i, target_len) == target) {
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