#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> incr_list(std::vector<int> input) {
    for (int& num : input) {
        num++;
    }
    return input;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}