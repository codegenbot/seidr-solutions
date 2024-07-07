```cpp
#include <vector>
int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        int num = numbers[i];
        if (num % 3 == 0) {
            int result = (num / 3) - 2;
            sum += result;
        }
    }
    return sum;
}