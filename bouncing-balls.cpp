#include <cmath>
#include <iostream> 
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> numBounces >> firstBounce; 

    double bounceRatio = firstBounce / startHeight;
    double bouncinessIndex = bounceRatio;

    double newHeight = firstBounce;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        if(i > 1)
            startHeight *= sqrt(bounceRatio);
        else
            startHeight = firstBounce;
        totalDistance += abs(startHeight - newHeight); 
        newHeight = startHeight;
    }

    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}