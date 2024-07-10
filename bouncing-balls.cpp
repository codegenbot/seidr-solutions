#include <iostream>
#include <cmath> 
using namespace std; 

int main() { 
    double startHeight, firstBounce; 
    int numBounces; 

    cin >> startHeight >> firstBounce >> numBounces; 

    double bounciness = firstBounce / startHeight; 

    double totalDistance = 0.0; 
    for (int i = 1; i <= numBounces; ++i) { 
        totalDistance += pow(2, -bounciness) * startHeight; 
        startHeight *= 2 * (1 - bounciness); 
    } 

    cout.precision(5); 
    cout << fixed << totalDistance << endl; 

    return 0;