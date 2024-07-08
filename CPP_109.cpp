#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end());
    for (int i : arr) {
        if (i > max - i) {
            return false;
        }
    }
    return true;

}

int main() {
    assert(move_one_ball({})==true);
    return 0;