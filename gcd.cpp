```c++
#include <vector>
#include <string>
#include <iostream>

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

    while (!(cin >> a >> b) || a < 0 || b < 0) {
        cout << "Invalid input. Please enter two positive integers: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> a >> b;
    }

    cout << gcd(a, b) << endl;

    string text, target;
    bool isValidInput = false;
    while (!isValidInput) {
        cin >> text >> target;
        if (cin) {  // Check if input operation was successful
            isValidInput = true;
        } else {
            cout << "Invalid input. Please enter valid strings: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices)
        cout << i << " ";
}