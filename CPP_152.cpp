#include <vector>
#include <algorithm>
#include <tuple>
#include <cassert>

using namespace std;

tuple<size_t, size_t, size_t, size_t> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {count(a.begin(), a.end(), 1), count(b.begin(), b.end(), -1), count(a.begin(), a.end(), -1), count(b.begin(), b.end(), 1)};
}

int main() {
    assert(compare({1,2,3,5},{-1,2,3,4}) == make_tuple(2,0,0,1));
    return 0;
}