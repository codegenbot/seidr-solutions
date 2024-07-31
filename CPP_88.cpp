#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        return array;
    }

    if ((array.front() + array.back()) % 2 == 0) {
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }

    return array;
}

std::vector<int> input1 = {21, 14, 23, 11};
std::vector<int> input2 = {14, 21, 23, 11};

if (issame(sort_array(input1), sort_array(input2))) {
    std::cout << "Same" << std::endl;
} else {
    std::cout << "Not Same" << std::endl;
}