#include <vector>
#include <algorithm>
#include <cassert>

bool will_it_fly(const std::vector<int>& q, int w) {
    auto sum = 0;
    for (auto i = 0; i < q.size(); i++) {
        sum += q[i];
    }

    if (sum <= w && std::equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}