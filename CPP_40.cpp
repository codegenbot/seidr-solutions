#include <iostream>
#include <vector>

bool triples_sum_to_zero(std::vector<int>& l) {
    for (int i = 0; i < l.size() - 2; i++) {
        for (int j = i + 1; j < l.size() - 1; j++) {
            for (int k = j + 1; k < l.size(); k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> nums = {1, 2, -3, 4, -1, 0};
    if (triples_sum_to_zero(nums)) {
        std::cout << "There exist three elements whose sum is zero." << std::endl;
    } else {
        std::cout << "No three elements sum to zero." << std::endl;
    }

    return 0;
}