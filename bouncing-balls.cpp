#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cout << "Enter the starting height: ";
    cin >> startingHeight;

    cout << "Enter the height after the first bounce: ";
    cin >> firstBounceHeight;

    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = (numBounces * 2) + bouncinessIndex;

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}