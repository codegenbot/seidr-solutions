#include <iostream>
#include <vector>
#include <cmath> // for abs
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    int max_gcd = 0;
    for (int i = 1; i < indices.size(); i++) {
        int diff = abs(indices[i] - indices[i-1]);
        int g = gcd(diff, indices[i-1]);
        if (g > max_gcd) {
            max_gcd = g;
        }
    }
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << max_gcd << endl;

    return 0;
}