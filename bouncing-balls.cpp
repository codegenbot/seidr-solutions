#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;
    
    // Calculate the bounciness index
    if (startHeight == 0) {
        cout << "Error: Starting height cannot be zero." << endl;
        return -1;
    }
    bounciness = firstBounce / startHeight;

    // Calculate the total distance traveled
    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += pow(bounciness, i + 1);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}