#include <vector>
#include <cassert>
#include <climits>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> test_case = {1, 2, 3, 4, 3};
    std::vector<int> expected = {1, 2, 3, 4, 4};
    assert(is_same(expected, rolling_max(test_case));
    
    return 0;
}