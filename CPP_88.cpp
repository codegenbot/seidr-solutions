```
#include <algorithm>
#include <vector>

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

int main() {
    std::vector<int> array = {21, 14, 23, 11};
    array = sort_array(array);
    if (array.size() % 2 == 1) {
        std::cout << "Sum of first and last elements is odd: ";
    } else {
        std::cout << "Sum of first and last elements is even: ";
    }
    std::cout << array[0] + array.back() << std::endl;
    return 0;
}