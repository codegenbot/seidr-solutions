```c++
#include <vector>
#include <iostream>

int main() {
    int fuelCost(std::vector<int> v) {
        int sum = 0;
        for (int i : v) {
            sum += std::max(0, static_cast<int>(i / 3.0) - 2);
        }
        return sum;
    }

    std::vector<int> v = {12, 5, 7};
    int result = fuelCost(v);

    std::cout << "The total fuel cost is: " << result << std::endl;

    return 0;
}