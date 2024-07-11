```
#include <iostream>
#include <cmath> 
#include <iomanip>

int main() {
    double startHeight;
    cin >> startHeight;

    double firstBounceHeight;
    cin >> firstBounceHeight;

    double bouncinessIndex = firstBounceHeight / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight) * pow(bouncinessIndex, i);
    }

    cout << std::fixed << setprecision(5);
    cout << totalDistance << std::endl;

    return 0;
}