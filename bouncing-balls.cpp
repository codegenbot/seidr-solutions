#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int startHeight, firstBounce;
    long double numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    long double bouncinessIndex = (long double)firstBounce / startHeight;

    // Calculate total distance traveled
    long double totalDistance = 0.0L;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}