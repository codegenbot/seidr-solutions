#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    for (int i = 0; i <= text.length() - len; i++) {
        if (text.substr(i, len) == target) {
            result.push_back(i);
            i += len - 1;
        }
    }
    return result;
}

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}