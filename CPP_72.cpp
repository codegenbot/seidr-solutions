#include <iostream>
#include <vector>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum > w) {
        return false;
    }

    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    assert(will_it_fly({1, 2, 3, 2, 1}, 10) == true);
    assert(will_it_fly({1, 2, 3, 4, 5}, 15) == false);
    assert(will_it_fly({1, 2, 3, 4, 3, 2, 1}, 15) == false);

    return 0;
}