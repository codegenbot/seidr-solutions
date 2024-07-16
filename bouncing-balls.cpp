#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;
    double bouncinessIndex; // Declare here

    cin >> startHeight >> firstBounce >> numBounces;  

    bouncinessIndex = firstBounce / startHeight;
    startHeight = firstBounce;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (1 - 0.5 * (i % 2)) * 2 * startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(10);
    cout << static_cast<int>(totalDistance + 0.00001) << endl;

    return 0;
}