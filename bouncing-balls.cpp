#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    double bounciness = (firstBounce / startHeight);
    
    double totalDistance = 0.0;
    
    for(int i=1; i<=numBounces; i++){
        if(i==1){
            totalDistance += (startHeight + firstBounce);
        } else {
            totalDistance += (2*startHeight * pow(bounciness, i));
        }
    }
    
    cout << fixed << setprecision(5) << totalDistance;
    
    return 0;
}