#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;

    cout << "Enter the starting height: ";
    cin >> startingHeight;

    cout << "Enter the height after the first bounce: ";
    cin >> firstBounceHeight;

    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = (numBounces * 2) + bouncinessIndex;

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}