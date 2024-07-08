#include <algorithm>
#include <vector>

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) return array;

    auto middle = array.begin() + array.size() / 2;
    std::vector<int> left(array.begin(), middle);
    std::vector<int> right(middle, array.end());

    while (!left.empty() && !right.empty()) {
        if (*left.rbegin() <= *right.begin()) {
            sortedArray.push_back(*left.rbegin());
            left.pop_back();
        } else {
            sortedArray.push_back(*right.begin());
            right.erase(right.begin());
        }
    }

    sortedArray.insert(sortedArray.end(), left.begin(), left.end());
    sortedArray.insert(sortedArray.end(), right.begin(), right.end());

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
    
    return (array == vector<int>({23, 21, 14, 11})) ? 0 : 1;
}