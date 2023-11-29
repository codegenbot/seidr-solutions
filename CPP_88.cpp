#include <vector>
#include <algorithm>

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
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
    std::vector<int> array = {5, 2, 7, 1, 8};
    std::vector<int> sorted_array = sort_array(array);
    std::vector<int> expected_sorted_array = {1, 2, 5, 7, 8};
    bool is_same_result = is_same(sorted_array, expected_sorted_array);
    return 0;
}