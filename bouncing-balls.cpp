#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    if (startHeight <= 0 || firstBounceHeight <= 0) {
        cout << "Invalid input." << endl;
        return -1;
    }

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 2.0 * (1 + bouncinessIndex + pow(bouncinessIndex, 2) + ... 
                                  + pow(bouncinessIndex, numBounces));

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}