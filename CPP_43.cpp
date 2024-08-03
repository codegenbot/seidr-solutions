#include <iostream>
#include <vector>
#include <algorithm>

bool pairs_sum_to_zero(std::vector<int>& l) {
    sort(l.begin(), l.end());
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
    std::vector<int> l = {3, -2, 1, -1, -3};
    
    if (pairs_sum_to_zero(l)) {
        std::cout << "There exist two elements whose sum is zero." << std::endl;
    } else {
        std::cout << "No two elements have a sum of zero." << std::endl;
    }
    
    return 0;
}