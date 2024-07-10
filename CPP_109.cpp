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
    std::vector<int> test1 = {10, 9, 8, 7, 6};
    assert(move_one_ball(test1) == true);

    std::vector<int> test2 = {10, 11, 12, 13, 14};
    assert(move_one_ball(test2) == false);

    return 0;
}