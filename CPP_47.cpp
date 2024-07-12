#include <algorithm>
#include <vector>
#include <cassert>
#include <cmath>

double median(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
  
    int n = sortedList.size();
    if (n % 2 == 0) {
        return (sortedList[n/2 - 1] + sortedList[n/2]) / 2.0;
    } else {
        return sortedList[n/2];
    }
}