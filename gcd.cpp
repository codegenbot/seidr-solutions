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

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
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
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    string text, target;
    cout << "Enter text string: ";
    cin >> text;
    cout << "Enter target string: ";
    cin >> target;

    vector<int> indices = findIndicesOfSubstring(text, target);
    cout << "Indices of target string in text:";
    for (int index : indices) {
        cout << " " << index;
    }
    cout << endl;

    return 0;
}