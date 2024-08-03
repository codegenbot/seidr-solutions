#include <vector>
#include <string>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Add your code to test the functions here
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    string text, target;
    cout << "Enter text string: ";
    cin >> text;
    cout << "Enter target string: ";
    cin >> target;
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices at which target appears in the text: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}