#include <numeric>

bool will_it_fly(const std::vector<int>& q, int w) {
    int sum = std::accumulate(q.begin(), q.end(), 0);
    if (sum <= w && std::equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);

    return 0;
}