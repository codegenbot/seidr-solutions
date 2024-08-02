#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled by the ball
    double totalTimeTravelled = 0.0;
    for(int i=1; i<=numBounces; i++){
        totalTimeTravelled += (2*startHeight)*((bouncinessIndex*(pow(0.5,i))) - ((bouncinessIndex-1)*(pow(0.5,(i-1)))));
    }

    cout << fixed << setprecision(6);
    cout << bouncinessIndex << endl;
    cout << totalTimeTravelled << endl;

    return 0;
}