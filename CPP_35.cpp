#include <algorithm>
#include <vector>
using namespace std;

int findMax(vector<int> l) {
    int max_val = *max_element(l.begin(), l.end());
    return max_val;
}

int main() {
    assert(abs(findMax({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})-12)<1e-4);
    return 0;
}