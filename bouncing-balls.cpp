#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    double bounciness = firstBounce / startHeight;
    
    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * (startHeight * pow(bounciness, i) - startHeight * pow(bounciness, i-1));
    }
    
    cout << fixed << setprecision(4);
    cout << bounciness << endl;
    cout << totalDistance << endl;
    
    return 0;
}