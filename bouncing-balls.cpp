#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int startHeight, firstBounce;
    char comma;
    long double numBounces;

    cin >> startHeight >> comma >> firstBounce >> comma >> numBounces;

    // Calculate bounciness index
    long double bouncinessIndex = static_cast<long double>(firstBounce) / static_cast<long double>(startHeight);

    // Calculate total distance traveled
    long double totalDistance = 0.0L;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}