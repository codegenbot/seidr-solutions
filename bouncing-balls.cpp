#include <iostream>
using namespace std;

double calculateTotalDistance(double startingHeight, double heightAfterFirstBounce, int numBounces) {
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    double totalDistance = 0.0;
    
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    cout << fixed << setprecision(5) << calculateTotalDistance(startingHeight, heightAfterFirstBounce, numBounces) << endl;

    return 0;
}