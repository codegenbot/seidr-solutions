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
        totalDistance += 2 * (heightFirstBounce - heightStart) + 
                         (2 * (heightStart - heightFirstBounce / heightStart) * 
                          pow(1.0 - bouncinessIndex, i));
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}