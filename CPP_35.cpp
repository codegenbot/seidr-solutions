#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

using namespace std;

float findMaxElement(const vector<float>& l) {
    auto max = *max_element(l.begin(), l.end());
    return max;
}

int main() {
    assert(fabs(findMaxElement({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}