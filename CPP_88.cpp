```cpp
#include <algorithm>
#include <vector>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sortArray(std::vector<int> array) {
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

int testMain() {
    std::vector<int> array = {21, 14, 23, 11};
    array = sortArray(array);
    if (array.size() % 2 == 1) {
        std::cout << "Sum of first and last elements is odd: ";
    } else {
        std::cout << "Sum of first and last elements is even: ";
    }
    std::cout << array[0] + array.back() << std::endl;
    
    if (!isSame(sortArray({21, 14, 23, 11}) , {23, 21, 14, 11})) {
        return 1; // indicates failure
    }
    return 0; // indicates success
}

int main() {
    testMain();
}