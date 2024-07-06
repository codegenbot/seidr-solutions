#include <vector>
#include <algorithm>

bool below_threshold(vector<int> l, int t) {
    return !any_of(l.begin(), l.end(), [t](int num){return num >= t;});
}