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
    
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * (startingHeight + firstBounceHeight);
    }
    
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;
    
    return 0;
}