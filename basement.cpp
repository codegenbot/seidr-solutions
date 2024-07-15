#include <vector>

int basement(const std::vector<int>& inputVector) {
    int sum = 0;
    for (int i = 0; i <= inputVector.size(); ++i) {
        sum += i;
        if (sum < 0)
            return i - 1;
    }
    return -1;
}