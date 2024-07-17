#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    // calculate bounciness index
    double bounciness = firstBounce / startHeight;
    
    // total distance the ball travels
    double distance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        distance += (startHeight * pow(bounciness, i));
    }
    
    cout << fixed << setprecision(4) << distance << endl;
    
    return 0;
}