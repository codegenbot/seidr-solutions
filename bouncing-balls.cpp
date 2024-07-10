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

    double totalDistance = (1 + 0.5) * bouncinessIndex * startHeight; // 2nd term added based on the bouncing process
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += (1 + 0.5) * pow(bouncinessIndex, i+1) * startHeight;
    }

    cout.setprecision(6); // Set precision to display up to six decimal places
    cout << fixed << totalDistance << endl;

    return 0;
}