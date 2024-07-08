#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

double median(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    int n = sortedList.size();
    return (n % 2 == 0) ? (sortedList[n/2 - 1] + sortedList[n/2]) / 2.0 : sortedList[n/2];
}

int main() {
    std::vector<int> l = {8, 1, 3, 9, 9, 2, 7};
    // Median of {8, 1, 3, 9, 9, 2, 7} is 7
    assert(std::abs(median(l) - 7) < 1e-4);
    return 0;
}