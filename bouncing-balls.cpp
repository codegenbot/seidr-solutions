#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    cin >> startHeight >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = 0.5 * (1 - pow(2, -bouncinessIndex)) * (startHeight + firstBounceHeight) * numBounces;
    
    cout << fixed << setprecision(5) << totalDistance << endl;
    return 0;
}