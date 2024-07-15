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
    std::vector<int> vec = {12,18,20};
    int result = fuelCost(vec);
    return 0;
}