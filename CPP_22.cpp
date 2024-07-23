#include <vector>
#include <iostream>
#include <initializer_list>

std::vector<int> filter_positives(const std::vector<int>& input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool isEqualTo(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> testInput = {-1, 2, -3, 4, 5};
    std::vector<int> expectedResult = {2, 4, 5};
    
    assert(isEqualTo(filter_positives(testInput), expectedResult));
    
    return 0;
}