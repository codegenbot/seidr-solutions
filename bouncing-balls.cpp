#include <cmath>
#include <iostream> 
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> numBounces >> firstBounce; 

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        if(i > 1)
            startHeight *= bouncinessIndex;
        else
            startHeight = firstBounce;
        totalDistance += abs(startHeight - firstBounce); 
    }

    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}