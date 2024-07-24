```cpp
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i++; // start looking for the next match from where the last one ended
        }
    }
    return result;

int main() {
    string text, target;
    int a, b;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;

    if (a == 0 || b == 0) {
        cout << "Invalid input! Please try again." << endl;
        return 1;
    }

    int gcdVal = gcd(a, b);
    cout << "GCD is: " << gcdVal << endl;

    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target string: ";
    getline(cin, target);

    if (text.empty() || target.empty()) {
        cout << "Invalid input! Please try again." << endl;
        return 1;
    }

    auto indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;