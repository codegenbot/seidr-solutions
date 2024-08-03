#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b_vec) {
    if (a.size() != b_vec.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b_vec[i]) {
            return false;
        }
    }
    
    return true;
}