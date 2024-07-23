#include <iostream>
#include <vector>
#include <string>
#include <numeric>

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
    return __gcd(a, b); 
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

    int gcdResult = gcd(909378243576LL, 50); 
    cout << "GCD of " << 909378243576 << " and " << 50 << ": " << gcdResult << endl;

    return 0;
}