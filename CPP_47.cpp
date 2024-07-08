#include <vector>
#include <algorithm>
#include <cassert> // include <cassert> header

double median(const std::vector<int>& l) {  // Add 'const' keyword
    std::vector<int> sortedList = l;  // Create a copy to avoid modifying input
    std::sort(sortedList.begin(), sortedList.end());  // Sort the copy
    int n = sortedList.size();
    return (n % 2 == 0) ? (sortedList[n/2 - 1] + sortedList[n/2]) / 2.0 : sortedList[n/2];  // Return correct median
}

int main() {
    std::vector<int> l = {8, 1, 3, 9, 9, 2, 7};
    assert(std::abs(median(l) - 7) < 1e-4);  // Use 'std::abs'
    return 0;
}