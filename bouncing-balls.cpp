#include <iostream>

int main() {
    double h0, h1, bouncinessIndex;
    int numBounces;
    
    std::cin >> h0 >> h1 >> numBounces;
    
    bouncinessIndex = h1 / h0;
    
    double totalDistance = h0 + h1;
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * bouncinessIndex * h1;
        h1 *= bouncinessIndex;
        totalDistance += h1;
    }
    
    std::cout << totalDistance << '\n';
    
    return 0;
}