#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounce;
    int numBounces;

    cin >> startingHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bounciness = firstBounce / startingHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bounciness);
    }

    cout.setprecision(6); // Set precision to 6 decimal places
    cout << fixed << totalDistance << endl;

    return 0;
}