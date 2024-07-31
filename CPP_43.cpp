#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool pairs_sum_to_zero(std::vector<int> l) {
    sort(l.begin(), l.end());
    int left = 0, right = l.size() - 1;
    while (left < right) {
        int sum = l[left] + l[right];
        if (sum == 0) {
            return true;
        } else if (sum > 0) {
            right--;
        } else {
            left++;
        }
    }
    return false;
}

int main() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    return 0;
}