#include <vector>
#include <algorithm>
#include <cassert> // Add this header for 'assert' macro

bool will_it_fly(const std::vector<int>& q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }
    return (q == std::vector<int>(q.rbegin(), q.rend())) && (sum <= w);
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}