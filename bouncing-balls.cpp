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
    
    double totalDistance = (1 - pow(0.5, 2)) * bouncinessIndex; // formula for distance traveled
    
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;
    
    return 0;
}