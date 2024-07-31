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
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    
    assert(is_same(a, b));
    
    return 0;
}