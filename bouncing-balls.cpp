#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double distanceTravelled = 0.0; // initialize distance traveled
    cout << fixed; 
    cout << setprecision(10); 
    for (int i = 1; i <= numBounces; ++i) {
        if (i % 2 == 1) {
            distanceTravelled += startHeight * sqrt(2);
        } else {
            distanceTravelled += 0.5 * startHeight;
        }
    }
    cout << distanceTravelled << endl;

    return 0;
}