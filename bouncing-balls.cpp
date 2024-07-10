#include <iostream>
using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += bouncinessIndex * (2.0 * (heightStart + heightFirstBounce)) * pow(0.5, i);
    }

    cout << fixed << setprecision(6) << totalDistance;
    
    return 0;
}