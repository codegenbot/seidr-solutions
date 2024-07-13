#include <iostream>
using namespace std;

int main() {
    string startHeightStr, firstBounceStr;
    cin >> startHeightStr >> firstBounceStr >> int numBounces;

    double startHeight = stod(startHeightStr);
    double firstBounce = stod(firstBounceStr);

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

    std::cout << std::fixed << std::setprecision(10);
    std::cout << totalDistance << endl;

    return 0;
}