#include <iostream>
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
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * (1 - pow(1 - bouncinessIndex, i)));
    }
    
    cout << fixed << setprecision(5);
    cout << startHeight + totalDistance << endl;
    
    return 0;
}