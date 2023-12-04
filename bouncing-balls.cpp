#include <iostream>
using namespace std;

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double totalDistance = 0;
    for (int i = 1; i <= numBounces; i++) {
        double distance = (startingHeight - firstBounceHeight) * pow(bouncinessIndex, i);
        totalDistance += distance;
    }
    return totalDistance;
}

int main() {
    cout << "Enter the starting height of the ball: ";
    double startingHeight;
    cin >> startingHeight;
    cout << "Enter the height after the first bounce: ";
    double firstBounceHeight;
    cin >> firstBounceHeight;
    cout << "Enter the number of bounces: ";
    int numBounces;
    cin >> numBounces;
    cout << "The total distance traveled by the ball is: " << bouncingBalls(startingHeight, firstBounceHeight, numBounces) << endl;
}