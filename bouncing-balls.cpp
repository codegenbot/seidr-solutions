#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    startHeight = startHeight; // initialize startHeight before loop
    double distanceTravelled = 0.0; 
    for (int i = 1; i <= numBounces; ++i) {
        startHeight = startHeight * (1 + 0.5); // calculate new height for each bounce
        distanceTravelled += startHeight;
    }

    cout << fixed << setprecision(10) << distanceTravelled << endl;

    return 0;
}