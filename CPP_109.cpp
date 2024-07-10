```cpp
#include <vector>
#include <algorithm>

bool move_one_ball(std::vector<int> arr) {
    int max = *std::max_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != max - i) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    std::vector<int> v1 = {9,8,7,6,5};
    assert(move_one_ball(v1) == true);
    std::vector<int> v2 = {10, 1, 3, 4, 5};
    assert(move_one_ball(v2) == false);
    return 0;
}