#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) result.push_back(i);
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    string text, target;

    cout << "Enter two positive integers: ";
    while (!(cin >> a >> b) || a < 1 || b < 1) {
        cin.clear();
        cout << "Invalid input. Please enter two positive integers: ";
        cin.ignore();
        cin >> ws; // ignore any remaining characters in the input stream
        cin >> a >> b;
    }

    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the target substring: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices)
        cout << i << " ";
}