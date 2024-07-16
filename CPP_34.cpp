#include <algorithm>
#include <vector>

bool issame(vector<int>& a, vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}