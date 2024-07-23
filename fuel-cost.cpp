```c++
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = std::floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> v = {5, 10, 15};
    int result = fuelCost(v);
    std::cout << "Fuel cost: " << result << std::endl;
    return 0;
}