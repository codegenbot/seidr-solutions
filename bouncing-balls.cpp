#include <iostream>

int main() {
    double startHeight;
    
    std::cin >> startHeight;
    
    int firstBounce = static_cast<int>(startHeight) / 2; 
    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0; 
    int bounces; 

    std::cin >> bounces; 

    for (int i = 1; i <= bounces; ++i) {
        startHeight *= 0.5; 
        totalDistance += startHeight; 
    }

    std::cout << "The total distance the ball travels is: " << totalDistance * bouncinessIndex << std::endl;
    
    return 0;
}