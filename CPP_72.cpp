#include <vector>
#include <algorithm>

bool will_it_fly(const std::vector<int>& q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }

    if (sum <= w) {
        std::vector<int> reversed_q = q;
        std::reverse(reversed_q.begin(), reversed_q.end());
        if (q == reversed_q) {
            return true;
        }
    }
    return false;
}