#include <vector>
#include <algorithm>

bool move_one_ball(std::vector<int> arr) {
    int max = *std::max_element(arr.begin(), arr.end());
    for (int i = 0; i <= arr.size(); i++) {
        if (i >= arr.size() || arr[i] != max - i) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    std::vector<int> arr1 = {0, 1, 2, 3};
    assert(move_one_ball(arr1) == true);
    
    arr1.push_back(4);
    assert(move_one_ball(arr1) == false);
    
    return 0;
}