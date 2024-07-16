#include <vector>
int fuelCost(std::vector<int> nums) {
    int total = 0;
    for (int num : nums) {
        int result = (num / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        total += result;
    }
    return total;
}