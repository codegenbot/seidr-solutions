#include <iostream>
#include <vector>

bool pairs_sum_to_zero(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> nums = {2, -3, 5, -2, -1};

    if (pairs_sum_to_zero(nums)) {
        std::cout << "Two elements with sum zero exist\n";
    } else {
        std::cout << "No two elements with sum zero\n";
    }

    return 0;
}