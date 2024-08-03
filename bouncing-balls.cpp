#include <iostream>
using namespace std;

#include <cmath> 
#include <iomanip>

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    cout << fixed << setprecision(4);
    cout << bouncinessIndex << endl;
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndex, -i*0.5) * startHeight;
    }
    cout << totalDistance << endl;

    return 0;
}