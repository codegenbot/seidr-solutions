#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    double firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = (1 - pow(bouncinessIndex, 2)) * (startingHeight + firstBounceHeight) * numBounces;
    
    cout << fixed << setprecision(4);
    cout << startingHeight + firstBounceHeight + totalDistance << endl;
    
    return 0;
}