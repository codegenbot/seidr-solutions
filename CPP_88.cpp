#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> array) {
    int sum = array[0] + array.back();
    if (sum % 2 == 1) {
        std::sort(array.begin(), array.end());
    } else {
        std::sort(array.rbegin(), array.rend());
    }
    return array;
}