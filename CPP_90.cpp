#include <vector>
#include <algorithm>

int nextSmallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return -1; // or return None

    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    int res = *std::next(std::begin(sorted)+1, std::end(sorted));
    return res;
}