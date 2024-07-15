#include <iostream>
#include <vector>
#include <string>

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

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    string text; 
    cout << "Enter the text: ";
    cin >> text;

    string target;
    cout << "Enter the target substring: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << endl;
    }

    int a;
    cout << "Enter the first integer: ";
    cin >> a;

    int b;
    cout << "Enter the second integer: ";
    cin >> b;

    int g = gcd(a, b);
    cout << "GCD: " << g << endl;

    return 0;
}