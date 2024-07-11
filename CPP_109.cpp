#include <algorithm>
#include <cassert>
#include <vector>

bool move_one_ball(std::vector<int>& arr) {
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
    std::vector<int> arr = {}; // Create an empty vector
    assert(move_one_ball(arr) == true); // Pass the vector by reference
    return 0;
}