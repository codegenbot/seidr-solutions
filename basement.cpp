#include <vector>
#include <numeric>

int basement(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        if (std::accumulate(v.begin(), v.begin() + i + 1, 0) < 0)
            return i;
    }
    return -1;
}