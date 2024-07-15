#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
            // Skip the overlapping indices
            while(i + m <= n && text.substr(i, m) == target) {
                i += m;
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}