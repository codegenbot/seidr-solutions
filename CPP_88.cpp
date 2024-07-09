#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    using namespace std;
    std::vector<int> input = {21, 14, 23, 11};
    input = sort_array(input);
    assert(issame(input, std::vector<int>{23, 21, 14, 11}));
    return 0;
}