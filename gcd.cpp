````
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            int j = i + 1;
            while (j < n && text.substr(j, m).find(target) != string::npos) {
                j += m;
            }
            for (; j <= n; j += m) {
                if (text.substr(j, m) == target) {
                    result.push_back(j);
                } else {
                    break;
                }
            }
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
```