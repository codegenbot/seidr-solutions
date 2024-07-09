#include <vector>
int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(i / 3.0);
        sum += std::max(temp - 2, 0);
    }
    return sum;
}