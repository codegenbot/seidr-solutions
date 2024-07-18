#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(const std::vector<int>& q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w && std::equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    } else {
        return false;
    }
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}