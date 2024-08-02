#include <vector>

int basement(std::vector<int> &v) {
    int sum = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1; // or throw an exception, depending on the desired behavior
}