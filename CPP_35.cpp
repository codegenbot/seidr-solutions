#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

int findMax(initializer_list<int> l) {
    vector<int> v(l);
    size_t n = v.size();
    int max = *max_element(v.begin(), v.end());
    return abs(max - 12);
}

int main() {
    assert(abs(*max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.begin(), {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.end())- 12)<1e-4);
    return 0;
}