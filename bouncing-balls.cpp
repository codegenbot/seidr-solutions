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
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (startHeight * pow(bouncinessIndex, i));
    }
    
    cout.precision(5);
    cout << fixed << totalDistance << endl;
    
    return 0;
}