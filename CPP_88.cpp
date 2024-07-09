#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> arr) {
    if (!arr.empty()) {
        if ((arr.front() + arr.back()) % 2 == 0) {
            std::sort(arr.begin(), arr.end(), std::greater<int>());
        } else {
            std::sort(arr.begin(), arr.end());
        }
    }
    return arr;
}

int main() {
    std::vector<int> input = {21, 14, 23, 11};
    input = sort_array(input);
    assert(input == std::vector<int>{23, 21, 14, 11});
    return 0;
}