#include <iostream>
using namespace std;

double calculateTotalDistance(double startingHeight, double heightAfterFirstBounce, int numberOfBounces) {
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numberOfBounces; i++) {
        totalDistance += (startingHeight * pow(bouncinessIndex, i)) + startingHeight;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double result = calculateTotalDistance(startingHeight, heightAfterFirstBounce, numberOfBounces);

    cout << fixed << setprecision(4) << result << endl;

    return 0;
}