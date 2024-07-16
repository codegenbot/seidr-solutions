#include <vector>
bool below_threshold(std::vector<int> l, int t) {
    for (int i = 0; i < l.size(); ++i) {
        if (l[i] >= t) {
            return false;
        }
    }
    return true;
}