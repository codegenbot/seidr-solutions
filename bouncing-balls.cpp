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
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startingHeight * pow(2, i)) - (startingHeight * pow(2, i-1));
    }
    
    cout << fixed << setprecision(5);
    cout << bouncinessIndex << endl;
    cout << fixed << setprecision(5);
    cout << startingHeight + totalDistance << endl;

    return 0;
}