#include <vector>
#include <algorithm>

using namespace std;

int max_value(vector<int> l) {
    return *max_element(l.begin(), l.end());
}

int main() {
    assert(abs(max_value({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 12.4)<1e-4);
}