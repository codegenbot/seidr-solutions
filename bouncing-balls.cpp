#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    double startHeight;
    int numBounces;

    cin >> startHeight >> numBounces;

    // Calculate actual first bounce
    double firstBounce = startHeight; 

    while (true) {
        if(firstBounce <= 0.8 * startHeight)
            break;
        startHeight = firstBounce;
        firstBounce = 0.2 * startHeight; 
    }

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight) * pow(bouncinessIndex, i);
    }

    cout << setprecision(10) << totalDistance << endl;

    return 0;
}