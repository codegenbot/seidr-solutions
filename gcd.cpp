```cpp
#include <vector>
#include <string>
#include <algorithm>
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
    string text = "Hello World";
    string target = "o ";
    vector<int> result = indicesOfSubstring(text, target);

    long long num1 = 12, num2 = 15;
    long long gcdResult = gcd(num1, num2);
    
    cout << "Indices of substring are: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of two numbers is: " << gcdResult << endl;

    return 0;
}