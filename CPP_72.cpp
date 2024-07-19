#include <stdio.h>
#include <vector>
#include <numeric>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    return equal(q.begin(), q.begin() + q.size() / 2, q.rbegin()) && accumulate(q.begin(), q.end(), 0) <= w;
}