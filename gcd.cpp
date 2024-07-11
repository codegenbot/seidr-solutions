```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

vector<int> indices(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) break;
            j++;
        }
        if (j == target.length()) result.push_back(i);
    }
    return result;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;

    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target string: ";
    getline(cin, target);

    vector<int> result = indices(text, target);
    if (result.size() > 0) {
        cout << "Indices of substring are: ";
        for (int i : result)
            cout << i << " ";
        cout << endl;
    } else
        cout << "Target string not found." << endl;

    return 0;
}