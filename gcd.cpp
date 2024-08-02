#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            for(int j=i+1;j+i<=n-m && j<m;j++){
                if(text.substr(j+i,m)!=target)
                    break;
                result.push_back(j+i);
            }
        }
    }

    return result;
}

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}