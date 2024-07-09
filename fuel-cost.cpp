```cpp
int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(i / 3.0);
        int newTemp = std::floor(static_cast<double>(temp)) - 2;
        if (newTemp < 0) {
            newTemp = 0;
        }
        sum += newTemp;
    } 
    return sum;