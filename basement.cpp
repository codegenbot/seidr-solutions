#include <vector>
#include <algorithm>

int basement(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) return i + 1; // Include the current index in the sum
    }
    if (sum <= 0) return -1; // If the total sum is non-negative, there's no basement
    return -1;
}