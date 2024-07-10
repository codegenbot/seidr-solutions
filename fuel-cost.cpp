#include <vector>
#include <cmath>
#include <initializer_list>

int calculateFuelCost(std::vector<std::initializer_list<int>> numbers) {
    int total = 0;
    for (auto& num : numbers) {
        for (int number : num) {
            if (number > 0) {
                int result = static_cast<int>(std::floor(double(number) / 3.0)) - 2;
                if (result < 0) {
                    result = 0;
                }
                total += result;
            }
        }
    }
    return total;
}