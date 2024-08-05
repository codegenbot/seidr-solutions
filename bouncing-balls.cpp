#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    return (1 - pow(bouncinessIndex, 2)) / (1 - bouncinessIndex * bouncinessIndex) * (1 - pow(bouncinessIndex, numberOfBounces));
}

int main() {
    double heightAfterFirstBounce;
    double startingHeight;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    cout << fixed << setprecision(5) << totalDistance << endl;
    
    return 0;
}