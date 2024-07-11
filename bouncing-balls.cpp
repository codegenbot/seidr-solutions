#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double distanceTravelled = 0.0; // initialize distance traveled
    for (int i = 1; i <= numBounces; ++i) {
        startHeight = startHeight * (1 + 0.5); 
        distanceTravelled += startHeight;
    }

    cout << fixed << setprecision(10) << distanceTravelled << endl;

    return 0;
}