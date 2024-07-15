#include <vector>
#include <algorithm>

bool will_it_fly(const std::vector<int>& q, int w) {
    int sum = 0;
    for (size_t i = 0; i < q.size(); i++) {
        sum += q[i];
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

// Test cases
int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}