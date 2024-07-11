#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<int, pair<int, int>> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {{a.size(), {b.size(), make_pair(0, 0)}};
}

int main() {
    assert(compare({1,2,3,5},{-1,2,3,4})==make_pair(2, make_pair(0, 0)));
    return 0;
}