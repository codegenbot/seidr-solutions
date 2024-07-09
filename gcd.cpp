#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            // Check for overlapping substrings
            while (i + m <= n && text.substr(i, m) == target) {
                i++;
                m--;
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (a == 0 && b == 0)
        return 0;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    string text = "hello";
    string target = "ll";
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    int a = 48;
    int b = 18;
    int g = gcd(a, b);
    cout << "GCD of " << a << " and " << b << ": " << g << endl;

    return 0;
}