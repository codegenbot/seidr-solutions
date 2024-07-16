#include <vector>
#include <numeric>

bool will_it_fly(vector<int> q, int w){
    if (!equal(q.begin(), q.begin() + q.size()/2, q.rbegin())){
        return false;
    }
    int sum = accumulate(q.begin(), q.end(), 0);
    return sum <= w;
}