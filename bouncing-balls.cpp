#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    
    double firstBounce;
    cin >> firstBounce;
    
    double numBounces;
    cin >> numBounces;
    
    double bounciness = firstBounce / startHeight;
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bounciness, i);
    }
    
    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}