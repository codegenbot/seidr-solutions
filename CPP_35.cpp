#include <algorithm>
#include <cmath>

int maxAbsVal(vector<int> l) {
    return abs(*max_element(l.begin(), l.end()));
}