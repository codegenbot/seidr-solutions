#include <iomanip>
#include <iostream>

using namespace std;

double calculateDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = 0;
    double height = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += height;
        height *= bouncinessIndex;
        totalDistance += height;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = static_cast<double>(static_cast<long>(firstBounceHeight * 1000000000000000.0 / startingHeight)) / 1000000000000000.0;
    double distance = calculateDistance(startingHeight, bouncinessIndex, numBounces);
    
    cout << fixed << setprecision(15) << distance << endl;
    
    return 0;
}