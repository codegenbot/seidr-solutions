#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    if (startHeight == 0 || firstBounce > startHeight) {
        cout << "Invalid input" << endl;
        return -1;
    }
    
    double bounciness = firstBounce / startHeight;
    
    cout.precision(4);
    cout << fixed << setprecision(4);
    cout << (bounciness + 1) * (2.0 / (1 + pow(bounciness, numBounces))) - 1 << endl;
    
    return 0;
}