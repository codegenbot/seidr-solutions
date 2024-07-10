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
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (bouncinessIndex - 1) * startHeight * 2.0; // formula: bounciness index - 1 is the reduction in height per bounce, then multiply by start height and 2 to get distance of this bounce
        startHeight *= bouncinessIndex; // update starting height for next bounce
    }

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}