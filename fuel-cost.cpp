```cpp
#include <initializer_list>
int calculateFuelCost(std::initializer_list<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        total += static_cast<int>(std::floor(double(number) / 3)) - 2;
    }
    return total;
}