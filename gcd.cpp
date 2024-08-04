#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to find greatest common divisor
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin.ignore();
    getline(cin, text);
    cin >> target;
    vector<int> indices;

    // Finding all occurrences of target in text
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);  // Search for next occurrence starting after current position
    }

    for (int idx : indices) {
        cout << idx << " ";
    }

    return 0;
}