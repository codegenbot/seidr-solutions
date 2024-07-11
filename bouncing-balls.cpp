#include <iostream>
#include <cmath> 
#include <iomanip> 

int main() { 
    double startHeight; 
    std::cin >> startHeight;
    
    double firstBounceHeight;
    std::cin >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startHeight;
    
    int numBounces;
    std::cin >> numBounces;
    
    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight) * pow(bouncinessIndex, i);
    }
    
    std::cout << std::fixed << std::setprecision(5);
    std::cout << totalDistance << std::endl;
    
    return 0;
}