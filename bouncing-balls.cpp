#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> bouncinessIndex >> numBounces;
    
    // Calculate the total distance traveled by the ball
    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += firstBounceHeight * pow(bouncinessIndex, i);
    }
    
    // Calculate the final height of the ball
    double finalHeight = startingHeight + totalDistance;
    
    cout << fixed << setprecision(12) << "Total distance traveled: " << totalDistance << endl;
    cout << "Final height: " << finalHeight << endl;
    
    return 0;
}