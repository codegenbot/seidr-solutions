```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;

    string text;
    string target;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the target: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    if(indices.size() > 0) {
        cout << "Indices of Substring are: ";
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Target not found in the text." << endl;
    }

    return 0;
}