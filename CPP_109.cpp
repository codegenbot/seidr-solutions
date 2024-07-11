#include <algorithm>
#include <cassert>
#include <vector>

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
    assert(move_one_ball({}) == true);
    return 0;
}