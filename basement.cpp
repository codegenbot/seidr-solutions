#include <vector>

int basementIndex(const std::vector<int>& numbers) {
    int sum = 0;
    int index = 0;
    while (index < numbers.size()) {
        sum += numbers[index];
        if (sum < 0) {
            return index;
        }
        index++;
    }
    return -1; // Not found
}