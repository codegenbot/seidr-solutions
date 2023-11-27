#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        bouncinessIndex *= bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
        totalDistance += 2 * firstBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
   
    cout << "Enter starting height: ";
    cin >> startingHeight;
    cout << "Enter height after the first bounce: ";
    cin >> firstBounceHeight;
    cout << "Enter number of bounces: ";
    cin >> numBounces;
   
    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
   
    cout << "Total distance traveled: " << distance << endl;
   
    return 0;
}