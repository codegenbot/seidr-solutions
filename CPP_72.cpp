#include <vector>
#include <cassert>

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w) {
        for (int i = 0; i < q.size() / 2; i++) {
            if (q[i] != q[q.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    // Additional test cases here
    
    return 0;
}