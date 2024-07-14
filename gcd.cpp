#include <vector>
#include <string>
#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;
    target.pop_back();  // remove the newline character
    vector<int> indices = indicesOfSubstring(text, target);

    int min_index = indices[0];
    for (int i : indices) {
        if (i < min_index) {
            min_index = i;
        }
    }
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << min_index << endl;

    return 0;
}