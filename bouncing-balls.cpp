#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double heightAfterFirstBounce;
    cin >> heightAfterFirstBounce;
    
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    
    int numberOfBounces;
    cin >> numberOfBounces;
    
    double totalDistance = 0.0;
    for(int i = 1; i <= numberOfBounces; i++) {
        totalDistance += (startingHeight * pow(bouncinessIndex, i));
    }
    
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}