#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    if (a < 0 || b < 0) {
        a = abs(a);
        b = abs(b);
    }
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m + 1; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            i += m - 1; // skip the overlapping occurrences
        }
    }

    return result;
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

    int a = 909378243576;
    int b = 50; 
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl;

    return 0;
}