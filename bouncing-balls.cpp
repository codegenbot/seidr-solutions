#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces; 
    cin >> startHeight >> firstBounce >> numBounces; 

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight *= 2/3.0; // actual height after each bounce
        totalDistance += abs(startHeight - firstBounce); // distance traveled
    }

    cout << fixed;
    cout.precision(10);
    cout << totalDistance * bouncinessIndex * 4.0 << endl;

    return 0;
}