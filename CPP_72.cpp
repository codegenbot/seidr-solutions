#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>

using namespace std;

bool will_it_fly(const vector<int>& q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    if (sum <= w && equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    return 0;
}