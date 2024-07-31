#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

double median(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    int n = sortedList.size();
    if (n % 2 == 0) {
        return (sortedList[n / 2 - 1] + sortedList[n / 2]) / 2.0;
    } else {
        return sortedList[n / 2];
    }
}

int main() {
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4);
    return 0;
}