#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(const std::vector<int>& q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (sum > w) {
        return false;
    }
    
    std::vector<int> reversed_q = q;
    std::reverse(reversed_q.begin(), reversed_q.end());
    
    return q == reversed_q;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    return 0;
}