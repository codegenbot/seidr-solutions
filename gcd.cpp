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

vector<int> indicesOfSubstring(const string& text, const string& target) {
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
    // Test gcd function
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int result = gcd(num1, num2);
    cout << "GCD: " << result << endl;

    // Test indicesOfSubstring function
    string text, target;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter target: ";
    cin >> target;
    vector<int> resultIndices = indicesOfSubstring(text, target);
    cout << "Indices where target appears in text: ";
    for (int index : resultIndices) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}