#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    double firstBounce;
    int numBounces;

    cin >> startingHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startingHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * (startingHeight + (firstBounce - startingHeight) * bouncinessIndex);
    }

    // Print result
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}