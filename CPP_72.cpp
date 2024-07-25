#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w && equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}