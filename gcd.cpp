#include <iostream>
#include <algorithm>
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

    int indices = -1; // Initialize index of last found position
    vector<int> result;

    size_t pos = 0;
    while ((pos = str1.find(str2, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // Skip to the next occurrence
    }

    if (result.size() == 0)
        return 0;
    
    int gcdResult = result[0];
    for (int i = 1; i < result.size(); i++)
        gcdResult = __gcd(gcdResult, result[i]);
        
    cout << "GCD of indices: " << gcdResult << endl;
}