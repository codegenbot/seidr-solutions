#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = std::floor((double(num) / 3));
        if(result < 1) {
            result = 0;
        } else {
            result--;
        }
        sum += static_cast<int>(result);
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    int result = calculateFuelCost(numbers);
    std::cout << "Result: " << result << std::endl;
    return 0;
}