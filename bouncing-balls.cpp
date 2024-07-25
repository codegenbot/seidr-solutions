#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    if (startHeight == 0 || firstBounce > startHeight) {
        cout << "Error: invalid input" << endl;
        return -1;
    }
    
    double bounciness = firstBounce / startHeight;
    
    double totalDistance = 2.0 * (1 + bounciness) * numBounces;
    
    cout.setprecision(5);
    cout << fixed << totalDistance << endl;
    
    return 0;
}