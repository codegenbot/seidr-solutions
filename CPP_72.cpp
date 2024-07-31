#include <vector>

bool will_it_fly(std::vector<int> q, int w) {
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