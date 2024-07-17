#include <cmath>

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cout << "Enter the starting height: ";
    cin >> startingHeight;

    cout << "Enter the height after first bounce: ";
    cin >> heightAfterFirstBounce;

    bouncinessIndex = heightAfterFirstBounce / startingHeight;

    cout << "Enter number of bounces: ";
    cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (pow(2, i/2.0) + pow(2, (i-1)/2.0)) * (bouncinessIndex - 1);
    }

    cout << "The total distance traveled by the ball is: " << totalDistance << endl;

    return 0;
}