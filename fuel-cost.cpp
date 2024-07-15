#include <vector>
#include <cmath>

int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = std::floor((double)i / 3.0) - 2; 
        sum += result;
    }
    return sum;
}

int main() {
    return fuelCost({1, 2, 3, 4, 5});
}