#ifndef FIND_PAIR_H
#define FIND_PAIR_H

#include <vector>
#include <algorithm>

std::pair<int, int> findPair(std::vector<int> nums, int target);

#endif  // FIND_PAIR_H


#include "find_pair.h"

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::pair<int, int> pair = findPair(nums, target);
    if (pair.first == -1 && pair.second == -1) {
        std::cout << "No such pair found" << std::endl;
    } else {
        std::cout << "The pair is: (" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;
}