#include <vector>

int below_threshold(vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return 0;
        }
    }
    return 1;
}