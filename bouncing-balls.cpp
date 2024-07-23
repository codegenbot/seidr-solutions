#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    cout << "Enter the starting height of the ball: ";
    cin >> startingHeight;
    cout << "Enter the height after the first bounce: ";
    cin >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    int numBounces;
    cout << "Enter the number of bounces: ";
    cin >> numBounces;
    
    double totalDistance = 0.5 * (1 - pow(2, -bouncinessIndex)) * (1 + pow(2, -numBounces));
    
    cout << "The total distance traveled by the ball is: "
         << fixed << setiosflags(ios::fixed) << setprecision(6) << totalDistance << endl;
    
    return 0;
}