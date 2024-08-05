#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double firstBounceHeight;
    cin >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = 2.0 * (1 - pow(bouncinessIndex, numBounces)) * startingHeight;
    
    cout.setprecision(10);
    cout << fixed << totalDistance << endl;

    return 0;
}