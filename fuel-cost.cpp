```
#include <vector>
#include <cmath>

int main() {
    int sum = fuelCost({10, 20, 30});
    return sum;
}

int fuelCost(std::vector<int> v) {
    int totalFuel = 0;
    for (int i : v) {
        double temp = static_cast<double>(i) / 3; 
        totalFuel += std::floor(temp) - 2; 
    }
    return totalFuel;
}