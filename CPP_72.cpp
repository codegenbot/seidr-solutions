#include <vector>
#include <cassert>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w) {
        for (int i = 0, j = q.size() - 1; i < j; i++, j--) {
            if (q[i] != q[j]) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() {
    assert (will_it_fly({5}, 5) == true);
    return 0;
}