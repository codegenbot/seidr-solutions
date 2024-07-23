```cpp
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
    std::vector<int> vec = {10, 20, 30};
    int result = fuelCost(vec);
    std::cout << "The total fuel cost is: " << result << std::endl;
    
    return 0;
}