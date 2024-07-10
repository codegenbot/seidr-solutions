#include <algorithm>
#include <cmath>

int maxElement(vector<int> l) {
    return abs(*max_element(l.begin(), l.end()));
}