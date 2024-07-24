#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    
    double firstBounce;
    cin >> firstBounce;
    
    int numBounces;
    cin >> numBounces;
    
    double bouncinessIndex = firstBounce / startHeight;
    
    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (1 - pow(1 - bouncinessIndex, i)) * startHeight;
    }
    
    cout.precision(5);
    cout << fixed << totalDistance << endl;
    
    return 0;
}