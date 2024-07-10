#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce - startHeight) / startHeight;

    double totalDistance = 0.0;
    double height = firstBounce; 
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += height; 
        height = 0.5 * (startHeight + height); 
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}