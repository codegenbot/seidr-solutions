#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

int findMax(vector<int> l) {
    int max = *max_element(l.begin(), l.end());
    return abs(max - 12);
}

int main() {
    assert(abs(findMax({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})) < 1e-4);
}