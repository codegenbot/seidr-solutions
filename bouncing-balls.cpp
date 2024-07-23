#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cout << "Enter starting height of ball: ";
    cin >> startHeight;

    double firstBounce;
    cout << "Enter height after first bounce: ";
    cin >> firstBounce;

    double bouncinessIndex = firstBounce / startHeight;

    int numBounces;
    cout << "Enter number of bounces: ";
    cin >> numBounces;

    double totalDistance = 0.5 * (1 - pow(2, (-bouncinessIndex), 2)) * startHeight;
    
    for(int i=1; i<=numBounces; i++) {
        totalDistance += 2 * totalDistance + startHeight;
    }

    cout << "Total distance travelled: " << totalDistance << endl;

    return 0;
}