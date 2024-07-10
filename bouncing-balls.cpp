#include <iostream>

int main() {
    double h0, h1, bouncinessIndex;
    int numBounces;
    
    std::cin >> h0 >> h1 >> numBounces;
    
    bouncinessIndex = h1 / h0;
    
    double totalDistance = 2 * h0;
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += (1 + bouncinessIndex) * h0;
        h0 *= bouncinessIndex;
    }
    
    std::cout << totalDistance << '\n';
    
    return 0;
}