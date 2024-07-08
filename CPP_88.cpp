#include <algorithm>
#include <vector>
#include <initializer_list>

bool issame(std::vector<int> array1, std::vector<int> array2) {
    if (array1.size() != array2.size()) return false;
    for (int i = 0; i < array1.size(); i++) {
        if (array1[i] != array2[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) return array;

    auto middle = array.begin() + array.size() / 2;
    auto left = array.begin();
    auto right = middle;

    std::vector<int> sortedArray;

    while (left != right && right != middle) {
        if (*left <= *right) {
            sortedArray.push_back(*left);
            left++;
        } else {
            sortedArray.push_back(*right);
            right--;
        }
    }

    sortedArray.insert(sortedArray.end(), left, middle);

    return sortedArray;
}