#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l);

int main() {
    vector<int> input = {7, 3, 2, 4, 9, 1, 5, 8, 6};
    vector<int> expected_output = {2, 3, 1, 4, 9, 5, 6, 8, 7};

    vector<int> result = sort_third(input);

    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}