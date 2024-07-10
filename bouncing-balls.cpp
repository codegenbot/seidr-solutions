#include <iostream>
#include <cmath>

int main() {
    double h0, h1, bouncinessIndex;
    int numBounces;
    
    std::cin >> h0 >> h1 >> numBounces;
    
    bouncinessIndex = h1 / h0;
    
    double totalDistance = h0 * (1 + bouncinessIndex * (1 - std::pow(bouncinessIndex, numBounces))) / (1 - bouncinessIndex);
    
    std::cout << totalDistance << '\n';
    
    return 0;
}