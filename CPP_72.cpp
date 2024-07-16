#include <vector>
#include <algorithm>
#include <numeric>

bool will_it_fly(std::vector<int> q, int w){
    if (!std::equal(q.begin(), q.begin() + q.size()/2, q.rbegin())){
        return false;
    }
    int sum = std::accumulate(q.begin(), q.end(), 0);
    return sum <= w;
}