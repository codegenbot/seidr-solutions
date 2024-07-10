#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool will_it_fly(std::vector<int> q, int w) {
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

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    return 0;
}