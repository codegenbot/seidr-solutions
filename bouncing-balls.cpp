#include <iostream>
#include <cmath>
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
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }
    
    cout.precision(6); 
    cout << fixed;
    cout << totalDistance << endl;
    
    return 0;
}