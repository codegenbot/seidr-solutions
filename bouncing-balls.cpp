#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double distanceTravelled = 0.0; 
    for (int i = 1; i <= numBounces; ++i) {
        distanceTravelled += startHeight * std::pow(0.5, 2*i-2*bouncinessIndex);
    }

    cout << fixed << setprecision(10) << distanceTravelled << endl;

    return 0;
}