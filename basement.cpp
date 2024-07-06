```
#include <vector>

int basement(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
        if (sum < 0) return i;
    }
    return -1; // not found
}

int main() { return basement({-2,3,-4,5,-6,7,8,9,-10}); }