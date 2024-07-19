#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> order_by_points(const vector<int>& vec) {
    vector<int> result = vec;
    sort(result.begin(), result.end(), greater<int>());
    return result;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), vector<int>{23, 6, 6, 4, 0, -21, -76}));
    return 0;
}