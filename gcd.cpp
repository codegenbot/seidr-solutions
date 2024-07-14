#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        bool found = true;
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) result.push_back(i);
    }
    return result;
}

int main() {
    int num1, num2;
    cout << "Enter the first index: ";
    cin >> num1;
    cout << "Enter the second index: ";
    cin >> num2;

    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);

    int result = gcd(num1, num2);
    cout << "GCD of indices: " << result << endl;

    vector<int> indices = indicesOfSubstring(text, target);
    cout << "Indices of substring: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
}