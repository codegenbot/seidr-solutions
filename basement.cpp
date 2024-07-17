#include <vector>

int findFirstNegativeIndex(const std::vector<int>& numbers) {
    int total = 0;
    int firstIndex = -1;

    for (int i = 0; i < numbers.size(); i++) {
        total += numbers[i];
        if (total < 0) {
            return i;
        }
    }

    return firstIndex;
}