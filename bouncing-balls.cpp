#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * (2 * (heightAfterFirstBounce - startHeight));
        startHeight = heightAfterFirstBounce;
        heightAfterFirstBounce /= bouncinessIndex; // update the ball's height for the next bounce
    }

    cout << fixed; 
    cout << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}