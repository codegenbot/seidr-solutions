#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = numbers[0];
    result.push_back(max_num);

    for (int i = 1; i < numbers.size(); ++i) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }

    return result;
}