#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounceHeight;
    cin >> firstBounceHeight;
    double bouncinessIndex = firstBounceHeight / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += pow(2, (log(bouncinessIndex)/log(0.5))) - i * log(2) / log(0.5);
    }

    cout << fixed << setprecision(4) << totalDistance;

    return 0;
}