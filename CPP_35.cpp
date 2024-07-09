#include <algorithm>
#include <cassert>
#include <vector>
#include <initializer_list>
#include <iterator>
using namespace std;

int findMax(vector<int> l) {
    size_t n = l.size();
    int max = *max_element(l.begin(), l.end());
    return abs(max - 12);
}

int main() {
    vector<int> v = {1, 2, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    assert(abs(*std::max_element(v.begin(), v.end()))- 12)<1e-4);
}