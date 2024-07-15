#include <vector>

bool below_threshold(const std::vector<int>& list, int threshold) {
    for (const int& num : list) {
        if (num >= threshold) {
            return false;
        }
    }
    return true;
}