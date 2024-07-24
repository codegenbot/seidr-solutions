#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;
    
    cin >> startHeight >> heightAfterFirstBounce >> numBounces;
    
    double bouncinessIndex = heightAfterFirstBounce / startHeight;
    
    double totalDistance = 0.0;
    
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -0.5) * (1 - pow(bouncinessIndex, i));
    }
    
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;
    
    return 0;
}