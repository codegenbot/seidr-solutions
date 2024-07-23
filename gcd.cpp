#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m + 1; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return b; 
}

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    int a = 909378;
    int b = 243576; 
    int gcdResult = gcd(a, b); 
    cout << "GCD of " << a << " and " << b << ": " << gcdResult << endl;

    return 0;
}