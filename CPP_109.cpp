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
    std::vector<int> test1 = {5,4,3,2,1};
    assert(move_one_ball(test1));
    
    std::vector<int> test2 = {1,2,3,4,5};
    assert(!move_one_ball(test2));
    
    return 0;
}