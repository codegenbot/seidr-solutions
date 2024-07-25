#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounce;
    cin >> firstBounce;
    double bouncinessIndex = firstBounce / startHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (1 - pow(0.5, i)) * bouncinessIndex * startHeight;
    }
    
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;
    
    return 0;
}