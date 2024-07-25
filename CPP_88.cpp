```cpp
#include <algorithm>
#include <vector>

std::vector<int> &sort_array(std::vector<int>& array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 1) {
        std::sort(array.begin(), array.end());
    } else {
        std::sort(array.rbegin(), array.rend());
    }
    return array;
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == {23, 21, 14, 11});
    return 0;
}