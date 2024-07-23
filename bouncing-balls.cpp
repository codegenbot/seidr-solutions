```cpp
#include <iostream>
#include <cmath> 
#include <iomanip> 

int main() {
    std::string startHeightStr, firstBounceHeightStr;
    int numBounces;

    cin >> startHeightStr >> firstBounceHeightStr >> numBounces;

    double startHeight = stod(startHeightStr);
    double firstBounceHeight = stod(firstBounceHeightStr);

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance
    double totalDistance = (startHeight * (1 - pow(bouncinessIndex, numBounces))) / (1 - bouncinessIndex);

    cout << std::fixed << std::setprecision(5) << totalDistance << std::endl;
    
    return 0;
}