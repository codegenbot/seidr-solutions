#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        text.erase(0, pos + target.length());
    }
    
    if (!indices.empty()) {
        int gcdResult = indices[0];
        for (size_t i = 1; i < indices.size(); ++i) {
            gcdResult = gcd(gcdResult, indices[i]);
        }
        
        cout << "GCD of indices: " << gcdResult << endl;
    }

    return 0;
}