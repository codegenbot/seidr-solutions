#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int& num : result) {
        num++;
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {2, 3, 4, 5, 6};

    std::vector<int> result = incr_list(input);
    assert(issame(result, expected));

    return 0;
}