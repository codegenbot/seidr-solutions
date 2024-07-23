#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor((double)i / 3) - 2; 
        sum += temp; 
    }
    return sum;
}

int main() {
    std::vector<int> v;
    int input;

    // Add the given inputs to vector
    while (true) {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> input;
        if (input == 0)
            break;
        v.push_back(input);
    }

    int result = fuelCost(v);
    std::cout << "The fuel cost is: " << result << std::endl;
    return 0;
}