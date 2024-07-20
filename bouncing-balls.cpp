#include <iostream>
#include <cmath>
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
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (startHeight * pow(2, -i/3.0));
    }
    
    cout.precision(5);
    cout << fixed << totalDistance << endl;
    
    return 0;
}