#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(i / 3.0);
        sum += std::max(temp - 2, 0);
    }
    return sum;
}

int main() {
    // test your function
    return fuelCost(std::vector<int>{4, 5, 6});
}