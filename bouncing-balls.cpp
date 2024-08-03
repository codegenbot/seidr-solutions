#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return (firstBounceHeight / startHeight);
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return ((1 + bouncinessIndex) * pow((1 - bouncinessIndex), numBounces)) / (1 - pow(bouncinessIndex, 2));
}

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cout << "Enter the starting height: ";
    cin >> startHeight;
    cout << "Enter the height after the first bounce: ";
    cin >> firstBounceHeight;
    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numBounces);

    cout << fixed << setprecision(6) << "The total distance is: " << totalDistance << endl;

    return 0;
}