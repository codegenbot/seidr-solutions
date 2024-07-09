```cpp
#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

int findMax(vector<int> l) {
    size_t n = l.size();
    int max = *max_element(l.begin(), l.end());
    return abs(max - 12);
}

int main() {
    assert(abs(*std::max_element((vector<int>{5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}).begin(), (vector<int>{5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}).end())- 12)<1e-4;
    vector<int> v = (vector<int>{5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    return 0;
}