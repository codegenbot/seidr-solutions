#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (sum <= w && std::equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    } else {
        return false;
    }
}