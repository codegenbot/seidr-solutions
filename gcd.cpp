#include <vector>
#include <iostream>
#include <string>

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to find indices of substring
vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.length();
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    // Calculate GCD
    cout << gcd(a, b) << endl;

    // Find indices of substring
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);
    for (int num : result) {
        cout << num << endl;
    }
    return 0;
}