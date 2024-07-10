#include <algorithm>
#include <cmath>

int max_value(vector<int> l) {
    return abs(*max_element(l.begin(), l.end()));
}