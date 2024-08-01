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
    
    double totalDistance = (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2 + 1));
    
    for(int i = 2; i <= numBounces; ++i)
        totalDistance += (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, 2 + i-1));
        
    cout << fixed << setprecision(6);
    cout << totalDistance;
}