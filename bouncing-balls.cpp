#include <iostream>
#include <string> 
using namespace std;

int main() {
    string startHeightStr, firstBounceStr;
    int numBounces; 

    cin >> startHeightStr >> firstBounceStr >> numBounces; 

    double startHeight = stod(startHeightStr);
    double firstBounce = stod(firstBounceStr);

    if (!(cin && (cin.peek() == EOF))) {
        cout << "Invalid input. Please enter valid inputs." << endl;
        return 1;
    }

    double bouncinessIndex = (stod(firstBounceStr) / stod(startHeightStr));
    startHeight = stod(firstBounceStr); // update start height for next bounce

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (stod(startHeightStr) * bouncinessIndex); 
        startHeight *= 0.5; 
    }

    cout << fixed;
    cout.precision(10);
    cout << totalDistance << endl;

    return 0;
}