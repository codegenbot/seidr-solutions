#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double bounceHeight, int numBounces) {
    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = 0.0;
    
    for (int i = 0; i < numBounces; i++) {
        if (i == 0) {
            totalDistance += startingHeight;
        } else {
            totalDistance += 2 * bounceHeight;
            bounceHeight *= bouncinessIndex;
        }
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    
    cin >> startingHeight >> bounceHeight >> numBounces;
    
    cout << calculateDistance(startingHeight, bounceHeight, numBounces) << endl;
    
    return 0;
}