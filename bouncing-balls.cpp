```c++
#include <iostream>
using namespace std;

int main() {
    int startingHeight;
    cout << "Enter the starting height of the ball: ";
    cin >> startingHeight;

    double bouncinessIndex;
    cout << "Enter the height after the first bounce of the ball: ";
    cin >> bouncinessIndex;
    
    bouncinessIndex /= startingHeight;

    int totalDistance = 0;
    int numBounces;
    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startingHeight * bouncinessIndex - startingHeight) + (startingHeight * bouncinessIndex - startingHeight);
    }

    cout << "Total distance travelled by the ball is: " << totalDistance << endl;
    
    return 0;
}