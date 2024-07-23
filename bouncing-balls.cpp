```
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        heightFirstBounce *= bouncinessIndex; 
        totalDistance += 2 * abs(heightFirstBounce - heightStart); 
    }

    cout << std::fixed << std::setprecision(9) << totalDistance;

    return 0;
}