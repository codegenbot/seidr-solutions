#include <iostream>
#include <cmath>
#include <iomanip>

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
    double previousHeight = startHeight;
    for (int i = 1; i <= numBounces; ++i) {
        double bounceHeight = previousHeight * bouncinessIndex;
        totalDistance += bounceHeight - previousHeight;
        previousHeight = bounceHeight;
    }
    
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;
    
    return 0;
}