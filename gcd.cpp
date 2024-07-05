```c++
#include <vector>
#include <string>
#include <initializer_list> 
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
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

int main() {
    long long a = 12;
    long long b = 16;
    long long result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}