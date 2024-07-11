```cpp
#include <iostream>
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;
    std::cin >> startHeight >> ' ' >> heightAfterFirstBounce;
    double bouncinessIndex = pow(heightAfterFirstBounce / startHeight, 0.5);
    
    int numBounces;
    std::cin >> numBounces;
    
    double totalDistance = 0;
    for(int i=1; i<=numBounces; i++){
        double height = startHeight * pow(bouncinessIndex, 2*i);
        totalDistance += 2*startHeight + (height - startHeight); // Calculate the distance travelled in each bounce
    }
    
    std::cout << "The total distance traveled is: " << totalDistance << std::endl;
    return 0;
}