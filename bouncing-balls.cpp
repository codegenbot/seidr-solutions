#include <iostream>
using namespace std;

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (startingHeight * (1 - pow(bouncinessIndex, i)));
    }
    
    return totalDistance;
}

int main() {
    double startingHeight;
    cin >> startingHeight;
    double firstBounceHeight;
    cin >> firstBounceHeight;
    int numBounces;
    cin >> numBounces;

    cout << fixed << setprecision(6);
    cout << calculateTotalDistance(startingHeight, firstBounceHeight, numBounces) << endl;

    return 0;
}