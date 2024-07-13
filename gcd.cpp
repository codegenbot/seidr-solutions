```cpp
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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

int main() {
    int a = 12;
    int b = 15;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl;

    string text = "banana";
    string target = "ana";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}