#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return (heightAfterFirstBounce / startingHeight);
}

double calculateTotalDistance(int numberOfBounces, double bouncinessIndex) {
    double totalDistance = 0.0;
    
    for(int i = 1; i <= numberOfBounces; i++) {
        totalDistance += (bouncinessIndex * pow(0.5, i));
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    cout.setprecision(5);
    cout << fixed;
    cout << setprecision(4) << (startingHeight + calculateTotalDistance(numberOfBounces, bouncinessIndex)) << endl;

    return 0;
}