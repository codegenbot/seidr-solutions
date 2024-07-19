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

int main() {
    std::vector<int> tempList2 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    tempList2 = incr_list(tempList2);
    assert(issame(tempList2, {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}