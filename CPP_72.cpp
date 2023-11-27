#include <vector>

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
    // Test cases
    bool result1 = will_it_fly({5}, 5);
    bool result2 = will_it_fly({2, 4, 6, 4, 2}, 16);
    
    return 0;
}