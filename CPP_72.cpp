#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    if (sum > w || !equal(q.begin(), q.begin() + q.size() / 2, q.rbegin())) {
        return false;
    }
    return true;
}