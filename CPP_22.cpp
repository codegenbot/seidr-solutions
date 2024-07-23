#include <vector>
#include <iostream>
#include <initializer_list>

std::vector<int> filter_positives(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0 || (i == 0 && i != 'c' && i != 'a' && i != 'b')) {
            result.push_back(i);
        }
    }
    return result;
}

bool isEqualTo(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(isEqualTo(filter_positives({3, 3, 3}), {3, 3, 3}));
    return 0;
}