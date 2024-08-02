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
    // Additional test cases
    assert(will_it_fly({1, 2, 3, 2, 1}, 7) == true);
    assert(will_it_fly({4, 5, 6, 7}, 10) == false);

    return 0;
}