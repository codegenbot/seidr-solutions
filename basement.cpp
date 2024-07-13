#include <vector>

int basement(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += numbers[i];
        if (sum < 0)
            return i;
    }
}