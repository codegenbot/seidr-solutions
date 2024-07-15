#include <vector>

int findBasementIndex(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
        if (sum < 0)
            return i;
    }
    return -1;
}