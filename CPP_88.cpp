#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    std::int64_t sum = 0;
    for (int i : array) {
        sum += i;
    }
    if (sum % 2 == 0) {
        std::sort(array.begin(), array.end(), [](int a, int b){ return a > b; });
    } else {
        std::sort(array.begin(), array.end());
    }
    for (auto it = array.begin(); it != array.end(); ++it) {
        *it = *it;
    }
    return array;
}