#include <initializer_list>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num < t) {
            return true;
        }
    }
    return false;
}