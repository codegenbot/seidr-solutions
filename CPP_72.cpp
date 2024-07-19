#include <vector>
#include <algorithm>
#include <cassert>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }

    if (sum <= w) {
        std::vector<int> reverse_q = q;
        std::reverse(reverse_q.begin(), reverse_q.end());
        if (q == reverse_q) {
            return true;
        }
    }

    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}