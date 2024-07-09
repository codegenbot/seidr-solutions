```cpp
#include <algorithm>
#include <cassert>
#include <vector>
using namespace std;

int findMax(vector<int> l) {
    int max = *max_element(l.begin(), l.end());
    return abs(max - 12);
}

int main() {
    vector<vector<int>> v = {{1, 2, 3}, {-5, 2, -3}, {3, 9, 0}, {124, 1, -10}};
    int max = 0;
    for (const auto& inner : v) {
        if (*max_element(inner.begin(), inner.end()) > max)
            max = *max_element(inner.begin(), inner.end());
    }
    return abs(max - 12);
}