#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> input) {
    std::sort(input.begin(), input.end(), std::greater<int>());
    return input;
}

int main() {
    std::vector<int> input = {21, 14, 23, 11};
    input = sort_array(input);
    assert(input == std::vector<int>{23, 21, 14, 11});
    return 0;
}