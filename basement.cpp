#include <vector>
int basement(const vector<int>& v) {
    int sum = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0) return i + 1; // return the first index where the sum becomes negative
    }
    return -1; // no index found, return -1
}