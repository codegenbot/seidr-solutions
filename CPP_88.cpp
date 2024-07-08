#include <algorithm>
#include <vector>
#include <initializer_list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
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