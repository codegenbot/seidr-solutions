#include <vector>
#include <cmath>

int main() {
    std::vector<int> v = {1, 2, 3};
    int result = fuelCost(v);
    return 0;
}

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(i / 3.0);
        sum += std::max(temp - 2, 0);
    }
    return sum;
}