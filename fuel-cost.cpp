#include <vector>
#include <cmath>
using namespace std;

int calculateFuelCost(initializer_list<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int result = static_cast<int>(floor(double(number) / 3)) - 2;
        if (result < 0) {
            result = 0;
        }
        total += result;
    }
    return total;