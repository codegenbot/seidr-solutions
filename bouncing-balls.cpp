#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    if (startHeight == 0 || firstBounceHeight > startHeight) {
        cout << "Invalid input. Starting height must be greater than zero and the first bounce height must not exceed the starting height." << endl;
        return 1;
    }

    double bouncinessIndex = firstBounceHeight / startHeight;

    if (numBounces == 0) {
        cout << fixed << setprecision(3) << "No bounces, no distance traveled." << endl;
    } else {
        double totalDistance = 2.0 * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);
        cout << fixed << setprecision(6) << totalDistance << endl;
    }

    return 0;
}