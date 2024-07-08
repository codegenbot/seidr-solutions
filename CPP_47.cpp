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
```