#include <algorithm>
#include <cmath>

int maxElement(vector<int> l) {
    return *max_element(l.begin(), l.end());
}