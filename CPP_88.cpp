Here is the modified code:

```cpp
#include <algorithm>
#include <vector>

bool issame(cpp::vector<int> a, cpp::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

cpp::vector<int> sort_array(cpp::vector<int> array) {
    if (array.empty()) return array;

    auto middle = array.begin() + array.size() / 2;
    auto left = array.begin();
    auto right = middle;

    cpp::vector<int> sortedArray;

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
    cpp::vector<int> array = {21, 14, 23, 11};
    array = sort_array(array);
    if (array.size() % 2 == 1) {
        std::cout << "Sum of first and last elements is odd: ";
    } else {
        std::cout << "Sum of first and last elements is even: ";
    }
    std::cout << array[0] + array.back() << std::endl;
    
    if (!issame(sort_array({21, 14, 23, 11}) , {11, 14, 21, 23})) {
        std::cout << "Test failed";
    } else {
        std::cout << "Test passed";
    }
}