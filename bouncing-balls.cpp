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
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (bouncinessIndex * startingHeight) * (2.0 / pow(2, i));
    }
    
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;
    
    return 0;
}