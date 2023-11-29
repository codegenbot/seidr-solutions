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
    std::vector<int> array = {1, 4, 2, 3, 5};
    std::vector<int> sorted_array = sort_array(array);
    for (int num : sorted_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    if (is_same(a, b)) {
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    return 0;
}