```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce;        
    cin >> numBounces;

    if (!(cin && (cin.peek() == EOF))) {
        cout << "Invalid input. Please enter valid inputs." << endl;
        return 1;
    }

    double bouncinessIndex = (firstBounce / startHeight);
    startHeight = firstBounce; // update start height for next bounce

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (startHeight * bouncinessIndex); 
        startHeight *= 0.5; 
    }

    cout << std::fixed;
    cout << std::setprecision(10);
    cout << totalDistance << endl;

    return 0;
}