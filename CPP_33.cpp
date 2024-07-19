#include <vector>
#include <algorithm>

std::vector<int> sort_third(const std::vector<int>& l) {
    std::sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
    });
    return l;
}