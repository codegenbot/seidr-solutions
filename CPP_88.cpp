#include <vector>
#include <algorithm>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        return array;
    }
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    return array;
}

int main() {
    std::vector<int> array = {3, 1, 4, 2, 5};
    std::vector<int> sorted_array = sort_array(array);
    std::vector<int> expected_result = {5, 4, 3, 2, 1};

    if (is_same(sorted_array, expected_result)) {
        return 0;
    } else {
        return 1;
    }
}