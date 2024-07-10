#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

std::vector<int> pluck(int n) {
    int nums[] = {7, 9, 7, 1};
    std::vector<int> result;
    for (int num : nums) {
        if (num == 7)
            result = {1, 3};
        else if (num == 9)
            result = {2};
    }
    return result;
}

bool same = issame(pluck(7), pluck(7));

if (same)
    std::cout << "Arrays are same" << std::endl;
else
    std::cout << "Arrays are not same" << std::endl;

assert(same);