#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate the bounciness index
    bouncinessIndex = firstBounce / startHeight;

    // Calculate the total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout.setprecision(5); // Set precision to 5 decimal places
    cout << fixed << startHeight * bouncinessIndex << endl;

    cout.setprecision(10); // Set precision to 10 decimal places
    cout << fixed << totalDistance << endl;

    return 0;
}