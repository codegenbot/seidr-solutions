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
    for(int i=1; i<=numBounces; i++){
        totalDistance += pow(2, (double)i) * (startHeight + (firstBounce - startHeight) * ((bouncinessIndex-1)/((1-pow(bouncinessIndex,-1))^(i+1))));
    }
    
    cout.setprecision(5);
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}