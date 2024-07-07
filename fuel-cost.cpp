#include <vector>
#include <initializer_list>

int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        if (num % 3 == 0) {
            int result = (num / 3) - 2;
            sum += result;
        }
    }
    return sum;