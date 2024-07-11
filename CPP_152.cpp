#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

tuple<size_t, size_t, size_t, size_t> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return make_tuple(count(a.begin(), a.end(), 1), count(a.begin(), a.end(), -1), count(b.begin(), b.end(), 1), count(b.begin(), b.end(), -1));
}

int main() {
    assert(get<0)(compare({1,2,3,5},{-1,2,3,4})) == get<0>(compare({1,2,3,5},{-1,2,3,4}));
    return 0;
}