#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (str1.empty() || str2.empty()) {
        cout << "Error: Both strings must be non-empty." << endl;
        return 1;
    }

    vector<int> result; 

    size_t pos = 0;
    while ((pos = str1.find(str2, pos)) != string::npos) {
        result.push_back(pos);
        ++pos;
    }

    if (result.size() == 0)
        return 0;

    int gcdResult = 1;
    for (int i = 1; i < result.size(); i++) {
        int diff = abs(result[i] - result[i-1]);
        gcdResult = gcd(gcdResult, diff);
    }
        
    cout << "GCD of indices: " << gcdResult << endl; 
}