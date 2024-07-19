#include <vector>
#include <numeric>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = std::accumulate(q.begin(), q.end(), 0);

    if (sum <= w && std::equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }

    return false;
}