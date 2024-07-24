#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startHeight;
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * (startHeight * (1 + 2*i));
    }
    
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;
    
    return 0;
}