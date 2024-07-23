#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m + 1; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    int a = 100;
    int b = 50;
    cout << "GCD of " << a << " and " << b << ": " << gcd(b, a) << endl;

    return 0;
}