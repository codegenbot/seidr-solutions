#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    if (q.size() > 0 && q[0] != q.back()) return false; // check for balance
    
    long sum = 0;
    for (int x : q) {
        sum += x;
    }
    
    return sum <= w;
}