#include <iostream>
using namespace std;

double calculateBounciness(double startHeight, double firstBounce) {
    return firstBounce / startHeight;
}

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    double bouncinessIndex = calculateBounciness(startHeight, firstBounce);
    
    double totalDistance = (1 + pow(bouncinessIndex, 2)) * numBounces;
    
    cout << fixed << setprecision(4) << totalDistance;
    
    return 0;
}