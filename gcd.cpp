#include <iostream>
#include <string>
#include <vector>
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
    int a = 48, b = 18;
    vector<int> result = indicesOfSubstring("hellohellohello", "hello");

    cout << "GCD: " << gcd(a, b) << endl;
    cout << "Indices of Substring:" << endl;
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}