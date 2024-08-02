
#include <algorithm>
#include <vector>
#include <cassert>

double median(std::vector<int> &l) {
    sort(l.begin(), l.end());
    int n = l.size();
    assert(n > 0);
    if (n % 2 == 0) {
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    } else {
        return l[n/2];
    }
}
