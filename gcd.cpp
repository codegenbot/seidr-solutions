#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    vector<int> result;
    
    // ...
    
    if (!result.empty()) {
        int gcdResult = result[0];
        for (size_t i = 1; i < result.size(); ++i) {
            gcdResult = gcd(gcdResult, result[i]);
        }
        
        cout << "GCD of indices: " << gcdResult << endl;
    }

    return 0;
}