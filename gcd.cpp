```cpp
#include <iostream>
#include <vector>
#include <string>
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
            // Check for overlapping occurrences
            while (i + m <= n && text.substr(i, m) == target) {
                i++;
            }
        }
    }

    return result;
}

int main() {
    cout << "GCD of 12 and 15: " << gcd(12, 15) << endl;
    string text = "Hello world";
    string target = "world";
    vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        cout << "Target found at index: " << index << endl;
    }
    return 0;
}