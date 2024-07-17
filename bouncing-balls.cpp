#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    if(startHeight == 0) {
        cout << "Error: Start height cannot be zero." << endl;
        return -1;
    }
    
    double bounciness = firstBounce / startHeight;
    
    int totalDistance = (int) (((bounciness + 1) * (2.0 / (1.0 + pow(bounciness, numBounces))) - 1));
    
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}