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
        int start = min(result);
        for (size_t i = 1; i < result.size(); ++i) {
            start = gcd(start, result[i] - start);
        }
        
        cout << "GCD of indices: " << start + 1 << endl;
    }

    return 0;
}