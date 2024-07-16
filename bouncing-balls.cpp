#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;  

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance = 0.0;
    double maxHeight = firstBounce; // Initialize max height
    for (int i = 0; i < numBounces; ++i) {
        startHeight *= bouncinessIndex;
        totalDistance += maxHeight * pow(2, i + 1);
        maxHeight *= bouncinessIndex; // Update max height for next bounce
    }

    cout << fixed << setprecision(10);
    cout << static_cast<int>(totalDistance + 0.00001) << endl;

    return 0;
}