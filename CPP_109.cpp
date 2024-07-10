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
    std::vector<int> test1 = {1, 2, 3};
    assert(move_one_ball(test1) == false);
    std::vector<int> test2 = {0, 1, 2};
    assert(move_one_ball(test2) == true);
    return 0;
}