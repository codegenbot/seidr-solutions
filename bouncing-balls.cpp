#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    bounciness = firstBounce / startHeight;
    
    cout << fixed << setprecision(5) << bounciness << endl;
    
    cout << fixed << setprecision(5);
    
    for(int i = 1; i <= numBounces; i++) {
        if(i == 1)
            cout << firstBounce;
        else
            cout << " + " << startHeight * (1 - pow(bounciness, i));
        
        startHeight *= bounciness;
        
        if(i < numBounces) 
            cout << " + ";
    }
    
    cout << endl;

    return 0;
}