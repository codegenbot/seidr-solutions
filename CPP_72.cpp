#include <iostream>
#include <vector>
#include <cassert>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (size_t i = 0; i < q.size(); i++) {
        sum += q[i];
    }

    if (q.size() % 2 != 0) {
        return false;
    }

    for (size_t i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - i - 1]) {
            return false;
        }
    }

    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);

    return 0;
}