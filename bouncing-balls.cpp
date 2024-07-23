```
#include <iostream>
using namespace std;

int main() {
    int startHeight, firstBounce;
    cout << "Enter starting height: ";
    cin >> startHeight;
    cout << "Enter height after the first bounce: ";
    cin >> firstBounce;
    double bounciness = (double)firstBounce / startHeight;
    int numBounces;
    cout << "Enter number of bounces: ";
    cin >> numBounces;
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += pow(2, -0.3*i);
    }
    cout << "Total distance traveled by the ball is: " << fixed << setprecision(2) << totalDistance*bounciness << endl;
    return 0;
}