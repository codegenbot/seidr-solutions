```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(std::string text, std::string target) {
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

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    string text = "Hello";
    string target = "o";
    vector<int> indices = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    int a = 24;
    int b = 12;
    int res = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << res << endl;

    return 0;
}