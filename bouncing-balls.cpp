#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    
    double firstBounce;
    cin >> firstBounce;
    
    int numBounces;
    cin >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;
    
    // Calculate total distance
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (startHeight * (1 - pow(0.5, i))) * bouncinessIndex;
    }
    
    cout << fixed << setprecision(4) << totalDistance;
    return 0;
}