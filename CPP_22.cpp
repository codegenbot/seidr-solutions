#include <vector>
#include <iostream>

#include <algorithm>
#include <string>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(operator==(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}