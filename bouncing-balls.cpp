#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / (startHeight * 0.5);

    double distanceTravelled = 0.0; // initialize distance traveled
    for (int i = 1; i <= numBounces; ++i) {
        distanceTravelled += (startHeight * sqrt(2)) * pow(0.5, i) * pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(10) << distanceTravelled << endl;

    return 0;
}