```cpp
#include <iostream>
#include <cmath>  
#include <iomanip>  

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance
    double totalDistance = (startHeight * (1 - pow(bouncinessIndex, numBounces))) / (1 - bouncinessIndex);

    std::cout << std::fixed << std::setprecision(5) << totalDistance << std::endl;
    
    return 0;
}