#include <vector>
#include <cassert>

vector<int> issame(vector<int> a, vector<int> b) {
    vector<int> factors;
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            factors.push_back(i);
        }
    }
    return factors;
}