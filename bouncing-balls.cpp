```cpp
#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    string input;  

    cout << "Enter the starting height: ";
    cin >> input;
    startingHeight = stod(input);

    cout << "Enter the height after the first bounce: ";
    cin >> input;
    firstBounceHeight = stod(input);

    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = (numBounces * 2) + bouncinessIndex;

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}