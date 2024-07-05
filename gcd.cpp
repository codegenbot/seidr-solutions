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
    string text = "HelloWorld";
    string target = "o";
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices of substring: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    long long a = 48;
    long long b = 12;
    cout << "GCD is: " << gcd(a, b) << endl;
    return 0;
}