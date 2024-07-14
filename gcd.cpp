#include <vector>
#include <algorithm>
#include <iostream> 
#include <bits/stdc++.h>

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

    vector<int> result; 
    int indices = -1;
    
    size_t pos = 0;
    while ((pos = str1.find(str2, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1;
    }

    if (result.size() == 0)
        return 0;

    int gcdResult = 1;
    for (int i : result) {
        gcdResult = std::__gcd(gcdResult, i); 
    }
        
    cout << "GCD of indices: " << gcdResult << std::endl; 
}