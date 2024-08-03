#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool pairs_sum_to_zero(std::vector<int>& l) {
    std::sort(l.begin(), l.end());
    int left = 0;
    int right = l.size() - 1;
    
    while (left < right) {
        if (l[left] + l[right] == 0) {
            return true;
        } else if (l[left] + l[right] < 0) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

int main() {
    assert (pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    
    return 0;
}