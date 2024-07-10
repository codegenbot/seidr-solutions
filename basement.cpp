#include <vector>

int basement(std::vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1; // Return -1 if the sum of all integers is always non-negative.
}