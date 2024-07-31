#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n; ++i){
        if(std::is_sorted(arr.begin(), arr.end())){
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    assert(move_one_ball({1, 2, 3, 4, 5}) == true);
    assert(move_one_ball({5, 4, 3, 2, 1}) == false);

    return 0;
}