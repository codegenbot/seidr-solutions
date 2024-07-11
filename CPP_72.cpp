#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w) {
        std::vector<int> reversed_q = q;
        std::reverse(reversed_q.begin(), reversed_q.end());
        return q == reversed_q;
    }
    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}