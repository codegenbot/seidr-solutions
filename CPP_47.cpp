#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

double median(const std::vector<int>& l) {
    std::vector<int> sorted_list = l;
    std::sort(sorted_list.begin(), sorted_list.end());
    int n = sorted_list.size();
    return n % 2 == 0 ? (sorted_list[n/2 - 1] + sorted_list[n/2]) / 2.0 : sorted_list[n/2];
}

int main() {
    assert (std::abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4 );
    return 0;
}