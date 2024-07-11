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
        distanceTravelled += (startHeight * pow(2, 0.5)) * pow(0.5, i - bouncinessIndex);
    }
    cout << distanceTravelled << endl;

    return 0;
}