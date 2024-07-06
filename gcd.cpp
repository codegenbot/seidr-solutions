#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    for (int i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int gcdResult = gcd(12, 15); // Call gcd() function with input 12 and 15
    cout << "GCD of 12 and 15 is: " << gcdResult << endl;

    vector<int> indices = indicesOfSubstring("hello", "ll"); // Call indicesOfSubstring() function with input "hello" and "ll"
    for (auto index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}