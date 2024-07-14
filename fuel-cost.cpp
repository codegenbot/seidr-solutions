```cpp
#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        int temp = (*it / 3) - 2; 
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}

int main() { return fuelCost({1, 2, 3, 4, 5}); }