#include <iostream>
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = floor((double)i / 3);
        temp -= 2;
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> testVector(3);
    for (int i = 0; i < testVector.size(); i++) {
        testVector[i] = i + 1;
    }
    int result = fuelCost(testVector);
    std::cout << "The total fuel cost is: " << result << std::endl;
    return 0;
}